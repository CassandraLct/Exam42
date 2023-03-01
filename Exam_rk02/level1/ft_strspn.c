/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:41:32 by clecat            #+#    #+#             */
/*   Updated: 2022/09/19 14:33:50 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    
    while(s[i] != '\0')
    {
        if(ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return(i);
}

/*The strspn() function spans the initial part of the null-terminated
string s as long as the characters from s occur in the null-terminated
string charset.  In other words, it computes the string array index of
the first character of s which is not in charset, else the index of the
first null character.*/

/*#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}*/