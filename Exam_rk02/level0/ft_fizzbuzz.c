/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:17:33 by clecat            #+#    #+#             */
/*   Updated: 2022/06/14 12:06:46 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*sujet
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz'
instead.*/

void	write_nbr(int nbr)
{
	char	str[10] = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	main()
{
	int	i;

	i = 0;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		if(i % 3 == 0)
			write(1, "fizz\n", 5);
		if(i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			write_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
