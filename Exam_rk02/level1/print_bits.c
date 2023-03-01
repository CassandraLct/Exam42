/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:16:37 by clecat            #+#    #+#             */
/*   Updated: 2022/09/20 12:30:28 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* write ; ecrire une fonction qui prend un byte, et le print en binaire sans 
retour a la ligne 
ex: 2 -> 00000010 et soustraire
               128 64 32 16 8 4 2 1
                7   6  5  4 3 2 1 0
				0   0  0  1 0 1 0 0 pour 20 
pour 40			0	0  1  0 1 0 0 0
pour 2			0   0  0  0 0 0 1 0
pour 8 			0   0  0  0 1 0 0 0*/

int	puissance(int i)
{
	int y = 1;
	int z = 0;

	while (z < i)
	{
		y = y * 2;
		z++;
	}
	return(y);
}

void    print_bits(unsigned char octet)
{
	int i = 7; //puissance 7
	int j = 0;
	unsigned char	tab[9];

	while (tab[j])
	{
		tab[j] = '\0';
		j++;
	}
	j = 0;
	while (i >= 0)
	{
		if (octet < puissance(i)) // si octet inferieur a la puissance ecrit 0
			tab[j] = '0';
		else if (octet >= puissance(i)) //si octet superieur ecrire 1 et soustraire la puissance a l'octet
		{
			tab[j] = '1';
			octet = octet - puissance(i);
		}
		j++;
		i--;
	}
	j = 0;
	while(tab[j] != '\0')
	{
		write(1, &tab[j++], 1);
	}
}

int main()
{
	unsigned char i = 8;

	print_bits(i);
}