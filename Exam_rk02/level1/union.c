/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:16:42 by clecat            #+#    #+#             */
/*   Updated: 2022/09/20 15:28:36 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and
will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

Example:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/

char    verif(char a, char *str)
{
    int i = 0;
    
    while(str[i] && str[i] != a)
        i++;
    while(str[i] != '\0')
        return(1);
    return(0);
}

void    ft_union(char *str1, char *str2)
{
    int i = 0;
    int x = 0;
    char    check[255];
    
    while(str1[i] != '\0')
    {
        if(verif(str1[i], check) == 0)
        {
            write(1, &str1[i], 1);
            check[x] = str1[i];
            x++;
        }
        i++;
    }
    i = 0;
    while(str2[i] != '\0')
    {
        if(verif(str2[i], check) == 0)
        {
            write(1, &str2[i], 1);
            check[x] = str2[i];
            x++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return(0);
}