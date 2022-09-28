/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:48:40 by clecat            #+#    #+#             */
/*   Updated: 2022/09/01 11:12:49 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* ecrire un programme qui prend 2 strings et verifie si il est possible d'ecrire 
la premiere string avec les caracteres de la 2eme en respectant l'ordre d'apparition 
dans la 2eme string; si c'est possible le programme ecrit la string, suivi d'un \n
sinon juste \n
"faya" "fgvvfdxcacpolhyghbreda" fonctionne 
"faya" "fgvvfdxcacpolhyghbred" n'ecrit rien */

void ft_putstr(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if (argc == 3)
	{
		while(argv[2][j])
		{
			if (argv[2][j++] == argv[1][i])
				i += 1;
		}
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}