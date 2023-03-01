/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:17:05 by clecat            #+#    #+#             */
/*   Updated: 2022/09/23 10:02:28 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.
Examples:
- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/

int *ft_range(int start, int end)
{
    int *tab;
	int lenght;
	
	if(end < start)
		lenght = start - end;
	else
		lenght = end - start;
	tab = malloc(sizeof(int) * lenght + 1);
	if(tab == NULL)
		return(NULL);
	while(lenght >= 0)
	{
		tab[lenght] = end;
		if(start > end)
			end++;
		else
			end--;
		lenght--;
	}
	return(tab);
}

/*int main()
{
	//tab = 1, 0, -1, -2, -3 
	int i = 1;
	int j = -3;
	int x = 0;
	int	*tab;
	
	tab = ft_range(i , j);
	printf("tab = %d\n", tab[x]);
}*/