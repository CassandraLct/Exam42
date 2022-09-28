/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:14 by clecat            #+#    #+#             */
/*   Updated: 2022/09/06 16:05:25 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* ecrire un programme qui affiche la table de multiplication d'un nombre passer en
parametre. Le parametre sera toujours strictement positif qui rentre dans un int et
ce nb multiplier par 9 tiendra aussi dans un int

si aucum parametre, ecrire \name
exmple: ./tab_mult 9
1 x 9 = 9 
2 x 9 = 18
.... 9 x 9 = */

void    ft_putnbr(int n)
{
    char    c;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    if (n < 0 && n != -2147483648)
    {
        n *= -1;
        write(1, "-", 1);
    }
    if (n <= 9 && n != -2147483648)
    {
        c = n + '0';
        write(1, &c, 1);
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9'))
        return(0);
    if(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}

int main(int argc, char **argv)
{
    int i;
    int nb;
    
    if(argc == 2)
    {
		i = 1;
		nb = ft_atoi(argv[1]);
        while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(i * nb);
			write(1, "\n", 1);
			i++;
		}
    }
	else
    	write(1, "\n", 1);
    return(0);
}