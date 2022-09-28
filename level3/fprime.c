/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:45 by clecat            #+#    #+#             */
/*   Updated: 2022/09/15 13:07:53 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//simulation exam : bash -c "$(curl https://grademe.fr)"
/*
printf et atoi autorisee
Ecrivez un programme qui prend un nombre entier positif et affiche ses facteurs
premiers sur la sortie standard, suivi d'un saut de ligne.
Les facteurs doivent être affichés dans l'ordre croissant et séparés par '*',
de sorte que l'expression dans la sortie donne le bon résultat.

Si le nombre de paramètres est différent de 1, affiche simplement une nouvelle ligne.

L'entrée, quand il y en a une, sera valide.

facteur premier : 3*3 = 9*5 = 45*5 = 225*7 = 1575*11 = 17325*13 = 225225

Examples:
$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$*/

int main(int argc, char **argv)
{	
    if (argc == 2)
    {
		int i = 2; // nb premier commence par 2
		int nb = atoi(argv[1]);
		
		if (nb == 1)
			printf("1");
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break;
				printf("*");
				nb = nb / i;
				i = 2;
			}
			i++;
		}
    }
	printf("\n");
}
