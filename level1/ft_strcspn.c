/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:39:33 by clecat            #+#    #+#             */
/*   Updated: 2022/09/27 09:47:36 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);*/

//La fonction strcspn() calcule la longueur du segment initial de s qui ne
//contient que des caractères absents de reject.
size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    //int compteur = 0;

    while(s[i] != '\0')
    {
        while(reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        j = 0;
        i++;
    }
    return(i);
}

int main()
{
    size_t i;
    printf("%lu\n", strcspn("bonjour vous", "revoir"));
    i = ft_strcspn("bonjour vous", "revoir");
    printf("i = %lu\n", i);
}

/*size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
		j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}*/