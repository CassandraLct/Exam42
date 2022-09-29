/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:55:50 by clecat            #+#    #+#             */
/*   Updated: 2022/09/29 13:50:38 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		printf("i = %d\n", i);
		while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
		{
			i--;
		}
		printf("i = %d\n", i);
		j = i;
		printf("j = %d\n", j);
		while(argv[1][j] && (argv[1][j - 1] != ' ' && argv[1][j - 1] != '\t'))
			j--;
		printf("j = %d\n", j);
		while((argv[1][j] != ' ' && argv[1][j] != '\t') && argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.

Example:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/