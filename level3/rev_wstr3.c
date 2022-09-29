/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:57:43 by clecat            #+#    #+#             */
/*   Updated: 2022/09/29 16:18:45 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*write, malloc, free
Ecrivez un programme qui prend une chaîne de caractères comme paramètre, et
imprime ses mots dans l'ordre inverse. 
Un "mot" est une partie de la chaîne de caractères délimitée par des espaces
et/ou des tabulations, ou le début/la fin de la chaîne.
Si le nombre de paramètres est différent de 1, le programme affiche '\n'.
Dans les paramètres qui vont être testés, il n'y aura pas d'espaces "supplémentaires"
(c'est-à-dire qu'il n'y aura pas d'espace supplémentaire au début ou à la fin de la
chaîne, et les mots seront toujours séparés par un espace exactement).

Examples:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$*/

int main(int argc, char **argv)
{
	int i = 0;
	int end;
	int start;
	int flag;
	int x;
    
    if(argc == 2)
    {
        while(argv[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while(argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			end = i;
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if(flag != 0)
				write(1, " ", 1);
		}
    }
    write(1, "\n", 1);
    return(0);
}
