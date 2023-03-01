/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:09:57 by clecat            #+#    #+#             */
/*   Updated: 2022/09/07 13:28:40 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$*/

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n <= 9 && n != -2147483648)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(int argc, char **argv)
{
    int i = 1;
    
    if(argc > 1)
    {
        while(i < argc)
            i++;
        if(i == argc)
            ft_putnbr(i - 1);
    }
    else
        write(1, "0", 1);
    //write(1, "\n", 1);
    return (0);
}