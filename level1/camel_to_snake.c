/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:52:29 by clecat            #+#    #+#             */
/*   Updated: 2022/06/15 11:46:12 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*sujet malloc free realloc write
Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".
helloWorld = hello_world*/

/*void	camel_to_snake(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}*/

//or
char	*string_malloc(char *str)
{
	int		size;
	int		caps;
	char		*ret;

	size = 0;
	caps = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 65 && str[size] <= 90)
			caps++;
		size++;
	}
	ret = (char *)malloc(caps + size);
	if (!ret)
		return (NULL);
	return (ret);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char	*str;

	if (argc == 2)
	{
		str = string_malloc(argv[1]);
		if (str)
		{	
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] >= 65 && argv[1][i] <= 90)
				{
					str[j++] = '_';
					str[j++] = argv[1][i] + 32;
				}
				else
					str[j++] = argv[1][i];
				i++;
			}
			printf("str - %s\n", str);
			free(str);
		}
	}
	write(1, "\n", 1);
	return (0);
}
