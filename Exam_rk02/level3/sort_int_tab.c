/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:45:55 by clecat            #+#    #+#             */
/*   Updated: 2022/09/14 11:32:25 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following function:

void sort_int_tab(int *tab, unsigned int size);

Il doit trier (en place) le tableau d'int 'tab', qui contient exactement les
membres 'size', dans l'ordre croissant.

Les doubles doivent être préservés.

L'entrée est toujours cohérente.*/

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
	int temp;
	
	while(i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/*void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}*/