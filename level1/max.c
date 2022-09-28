/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:47:26 by clecat            #+#    #+#             */
/*   Updated: 2022/09/27 09:24:56 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//trouver le int max du tableau
int	max(int *tab, unsigned int len)
{
	int	max;

	if(!len)
		return (0);
	max = tab[--len];
	while(len--)
	{
		if(tab[len] > max)
			max = tab[len];
	}
	return (max);
}

int main()
{

}
