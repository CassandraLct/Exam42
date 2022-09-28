/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:42:01 by clecat            #+#    #+#             */
/*   Updated: 2022/09/23 12:47:01 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);*/
//puissance de 2
int is_power_of_2(unsigned int n)
{
    int power;
	int x = 1;
    
	power = x;
    while(x <= n)
	{
		power = power * 2;
		if (power == n)
		{
			return(1);
		}
		x++;
	}
	return(0);
}

int main()
{
	int res;
    unsigned int i = 4;
    
    res = is_power_of_2(i);
	printf("%d\n", res);
}


/*2*0 = 1
2*1 = 2
2*2 = 4
2*3 = 8
2*4 = 16
2*5 = 32
2*6 = 64
2*7 = 128
2*8 = 256
2*9 = 512
210 = 1 024
211 = 2 048
212 = 4 096*/

