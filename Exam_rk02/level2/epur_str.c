/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:51:12 by clecat            #+#    #+#             */
/*   Updated: 2022/09/21 11:34:30 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$*/

int main(int argc, char **argv)
{
    int i = 0;
    
    if(argc == 2)
    {
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while(argv[1][i] != '\0')
		{
			while (argv[1][i] >= 33 && argv[1][i] <= 126)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if ((argv[1][i] == 32 || argv[1][i] == '\t') && (argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126))
				write(1, " ", 1);
			if(argv[1][i] != '\0')
				i++;
		}
    }
    write(1, "\n", 1);
    return (0);
}