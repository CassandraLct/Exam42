/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:16:53 by clecat            #+#    #+#             */
/*   Updated: 2022/08/31 14:43:08 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*fonction autorisee : malloc, free, realloc, write
wcrire un programme qui prend une string en format lower camel case et le convertis
en une string de format snakecase
lowercamelcase: une string ou chaque mot commence par une maj sauf le premier
snakecase : une string ou tout les mots sont en miniscule separer par un underscore
helloWorld = hello_world
HelloWorld = _hello_world ou error ? car pas camelcase*/

// ne fonctionne pas pour HelloWorld

/*void verif(char *str)
{
	if(str[1] >= 'A' && str <= 'Z')
		write(1, "not a camelcase format", 22);
}*/

void camel_to_snake(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
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
		if (argv[1][0] >= 'A' && argv[1][0] <= 'Z')
			write(1, "\n", 1);
		else
			camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

/*char *string_malloc(char *str)
{
	int size;
	int caps;
	char *ret;

	size = 0;
	caps = 0;
	while(str[size] != '\0')
	{
		if(str[size] >= 65 && str[size] <= 90)
			caps++;
		size++;
	}
	ret = (char *)malloc(caps + size);
	if(!ret)
		return(NULL);
	return(ret);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *str;

	if (argc == 2)
	{
		str = string_malloc(argv[1]);
		if(str)
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] >= 65 && argv[1][i] <= 90)
				{
					str[j++] = '_';
					str[j++] = argv[1][i] + 32;
				}
				else
					str[j++] = argv[1][i];
				i++;
			}
			//printf("str - %s\n", str);
			write(1, str, 1);
			str++;
		free(str);
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
