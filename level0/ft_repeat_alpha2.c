/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:58:09 by clecat            #+#    #+#             */
/*   Updated: 2022/09/20 09:19:56 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*ecrire un programme appeler repeat alpha qui prend une chaine de caractere et
la renvoie en repetant chaque lettre en fonction de son index dans l'alphabet
a = a; b = bb .... les maj ne sont pas modifier A = A; B = BB
si le nombre d'arg est != 1 write '\n'*/

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	
	if (argc == 2)
	{
		while(argv[1][i])
		{
			j = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				j += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				j += argv[1][i] - 'A';
			while (j)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}