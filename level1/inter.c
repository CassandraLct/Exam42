/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:59:07 by clecat            #+#    #+#             */
/*   Updated: 2022/09/20 15:14:22 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/

char    verif(char a, char *str)
{
    int i = 0;
    
    while(str[i] && str[i] != a)
        i++;
    while(str[i] != '\0')
        return(1);
    return(0);
}

void    inter(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int x = 0;
    char    check[255];
    
    while(str1[i] != '\0')
    {
        while(str2[j] != '\0')
        {
            if(str1[i] == str2[j])
            {
                if(verif(str1[i], check) == 0)
                {
                    write(1, &str1[i], 1);
                    check[x] = str1[i];
                    x++;
                }
            }
            j++;
        }
        j = 0;
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return(0);
}