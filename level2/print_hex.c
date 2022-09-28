/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:17:55 by clecat            #+#    #+#             */
/*   Updated: 2022/09/07 12:57:48 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
*/

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9'))
        return (0);
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}

int ft_putnbrbase(int n)
{
    const char *base;
    char c;
    int all;

    base = "0123456789abcdef";
    c = 0;
    all = 0;
    if (n < 0)
    {
        n *= -1;
        write(1, "-", 1);
        all++;
    }
    if(n <= 15 && n >= 0)
    {
        c = n + '0';
        write(1, &base[n], 1);
        all++;
    }
    if (n > 15)
    {
        all += ft_putnbrbase(n / 16);
        all += ft_putnbrbase(n % 16);
    }
    return(all);
}

int main(int argc, char **argv)
{
    int nb;
    int nbr;
    
    printf("argv = %s\n", argv[1]);
    nb = atoi(argv[1]);
    printf("nb atoi = %d\n", nb);
    if(argc == 2)
    {
        nbr = ft_atoi(argv[1]);
        printf("nbr = %d\n", nbr);
        ft_putnbrbase(nb);
    }
    write(1, "\n", 1);
    return(0);
}