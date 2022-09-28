/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:59 by clecat            #+#    #+#             */
/*   Updated: 2022/09/15 15:04:37 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//a revoir car segfault

/* malloc
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/

char    *ft_itoa(int nbr)
{
    int len;
    long n_tmp;
    char    *str;

    len = 0;
    n_tmp = nbr;
    str[len] = '\0';
    if (nbr == -2147483648)
        return ("-2147483648");
    if (!(str = (char *)malloc(sizeof(char) * len +1)))
        return (NULL);
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        len += 1;
        nbr *= -1;
        str[0] = '-';
    }
    while (n_tmp)
    {
        n_tmp /= 10;
        len += 1;
    }
    while (nbr)
    {
        str[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}

int main()
{
    int j = 16;
    char    *str;
    
    str = ft_itoa(j);
    printf("%s\n", str);
    return (0);
}