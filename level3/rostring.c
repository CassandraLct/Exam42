/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:46:26 by clecat            #+#    #+#             */
/*   Updated: 2022/09/27 09:19:15 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int start;
	int end;
	int flag = 0;
    
    if(argc >= 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')//enlever tout les spaces du debut
            i++;
		start = i;//debut de la chaine
		while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))//parcourir
			i++;
		end = i;//fin du premier mot
		while(argv[1][i] == ' ' || argv[1][i] == '\t')//parcourir les espaces d'apres
			i++;
		while(argv[1][i] != '\0')//parcourir le reste de la chaine jusqua la fin
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t')//parcourir les espaces d'apres
			{
				if ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t'))
					write(1, " ", 1);
				i++;
			}
			flag = 1;
			write(1, &argv[1][i], 1);
			i++;
		}
		if(flag == 1)//ecrire espace de fin avant le dernier mot
		{
			write(1, " ", 1);
		}
		while(start < end)//ecrire le premier mot a la fin
		{
			write(1, &argv[1][start], 1);
			start++;
		}
    }
    write(1, "\n", 1);
    return (0);   
}

/*#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;
	int flag = 0;
	
	if (argc > 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] && (argv[1][i] != ' ' &&  argv[1][i] != '\t'))
			i++;
		end = i;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] != '\0')
		{
			flag = 1;
			write (1, &argv[1][i], 1);
			i++;				
		}
		if (flag == 1)
		{
			write (1, " ", 1);
		}
		while(start < end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}	
	write (1, "\n",1);	
}*/