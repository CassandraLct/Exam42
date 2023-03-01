/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchandreplace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:32:40 by clecat            #+#    #+#             */
/*   Updated: 2022/06/14 14:48:07 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*sujet fonction autorisee write et exit
Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.*/

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 4)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i] , 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
}
