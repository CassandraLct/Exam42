/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:42:10 by clecat            #+#    #+#             */
/*   Updated: 2022/09/28 16:03:16 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*write, malloc, free
Écrivez un programme qui prend une chaîne de caractères et affiche cette chaîne
après l'avoir fait pivoter d'un mot vers la gauche.

Ainsi, le premier mot devient le dernier, et les autres restent dans le même ordre.

Un "mot" est défini comme une partie d'une chaîne délimitée soit par des
espaces/tabulations, soit par le début/la fin de la chaîne.

Les mots seront séparés par un seul espace dans la sortie.

S'il y a moins d'un argument, le programme affiche \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$*/

int main(int argc, char **argv)
{
    int i = 0;
	int j = 0;
	int x;
	int end; //indice du debut du mot a ecrire a la fin
    char *str;
    
    if(argc >= 2)
    {
		x = strlen(argv[1]);
		printf("x = %d\n", x);
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] != '\0')
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if(argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
				{
					i++;
					j += 1;
				}
				else
					i++;
			}
			while(argv[1][i] >= 33 && argv[1][i] <= 126)
			{
				j++;
				i++;
			}
			if(argv[1][i] != '\0')
				i++;
			//printf("i = %d, j = %d\n", i, j);
		}
		if (!(str = malloc(sizeof(char) * j + 1)))
			return(1);
		i = 0;
		j = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		end = i;
		printf("i = %d\n", i);
		printf("end = %d\n", end);
		while(argv[1][i] != '\0')
		{
			if()
			i++;
		}
    }
    write(1, "\n", 1);
    return(0);
}

//pour "abc   huit"
//j doit etre = 8 car 7 caract + 1 espace;
//resultat = "huit abc"
//pour "  abc  huit def" = "huit def abc"