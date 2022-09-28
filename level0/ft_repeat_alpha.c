/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:50:48 by clecat            #+#    #+#             */
/*   Updated: 2022/06/14 15:41:04 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.*/

int main(int argc, char **argv)
{
	int i = 0;
	int y;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			y = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				y += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				y += argv[1][i] - 'A';
			while (y)
			{
				write(1, &argv[1][i], 1);
				y--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
