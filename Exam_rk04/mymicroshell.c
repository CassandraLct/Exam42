/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:33:31 by clecat            #+#    #+#             */
/*   Updated: 2023/03/01 11:14:56 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	tablen(char **tab)
{
	int	i = 0;

	while (tab[i])
		i++;
	return (i);
}

void	free_tab(char **cmd)
{
	int	i = 0;

	if (cmd)
	{
		while(cmd[i])
		{
			free(cmd[i]);
			i++;
		}
		free(cmd);
	}
}

void	print_fatalerror(void)
{
	write(2, "error: fatal\n", 13);
	exit(0);
}

char	*ft_strdup(char *str)
{
	char	*tmp;
	int	i = 0;

	tmp = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!tmp)
		print_fatalerror();
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

void	cd(char **cmd)
{
	if (tablen(cmd) != 2)
	{
		write(2, "error: cd: bad arguments\n", 25);
		return ;
	}
	if (chdir(cmd[1]) == 0)
		return ;
	write(2, "error: cd: cannot change directory to ", 38);
	write(2, cmd[1], ft_strlen(cmd[1]));
	write(2, "\n", 1);
}

int	operation(char *str)
{
	if (strcmp(str, "|") == 0 || strcmp(str, ";") == 0)
		return (1);
	return (0);
}

void	piping(char **argv, char **env, int stdin)
{
	char	**cmd;
	static int	i = 1;
	int		j = 0;
	int		fd[2];
	int		pip;
	int		next = STDIN_FILENO;

	cmd = malloc(sizeof(char *) * 100);
	if (!cmd)
		print_fatalerror();
	if (argv[i] && operation(argv[i]) == 1)
		i++;
	while (argv[i] && operation(argv[i]) == 0)
	{
		cmd[j] = ft_strdup(argv[i]);
		j++;
		i++;
	}
	cmd[j] = NULL;
	if (argv[i] && strcmp(argv[i], "|") == 0)
	{
		pipe(fd);
		pip = fork();
		if (pip < 0)
			print_fatalerror();
		if (pip == 0)
		{
			dup2(stdin, STDIN_FILENO);
			dup2(fd[1], STDOUT_FILENO);
			if (strcmp("cd", cmd[0]) == 0)
			{
				cd(cmd);
				exit(0);
			}
			if (execve(cmd[0], cmd, env) == -1)
			{
				write(2, "error: cannot execute ", 22);
				write(2, cmd[0], ft_strlen(cmd[0]));
				write(2, "\n", 0);
				exit(0);
			}
		}
		close(fd[1]);
		next = fd[0];
	}
	else
	{
		pip = fork();
		if (pip < 0)
			print_fatalerror();
		if (pip == 0)
		{
			dup2(stdin, STDIN_FILENO);
			if (strcmp("cd", cmd[0]) == 0)
			{
				cd(cmd);
				exit(0);
			}
			if (execve(cmd[0], cmd, env) == -1)
			{
				write(2, "error: cannot execute ", 22);
				write(2, cmd[0], ft_strlen(cmd[0]));
				write(2, "\n", 1);
				exit(0);
			}
		}
	}
	if (stdin != STDIN_FILENO)
		close(stdin);
	free_tab(cmd);
	waitpid(0, NULL, 0);
	if (argv[i])
		piping(argv, env, next);
}

int	main(int argc, char **argv, char **env)
{
	if (argc > 1)
		piping(argv, env, STDIN_FILENO);
	return (0);
}