/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuzz2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:34:40 by clecat            #+#    #+#             */
/*   Updated: 2022/09/09 11:01:45 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_nbr(int nbr)
{
	char str[10] = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int main()
{
	int i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if(i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			write_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
