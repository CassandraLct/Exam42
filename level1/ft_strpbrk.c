/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:34 by clecat            #+#    #+#             */
/*   Updated: 2022/09/27 09:37:43 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/
                    // *s, *accept
char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

    if (!s1 || !s2)
        return(0);
    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                return((char *)s1 + i);
            j++;
        }
        i++;
    }
    return(0);
}

int main()
{
    char *c;
    
    printf("%s\n", strpbrk("bonjour", "au revoir"));
    c = ft_strpbrk("bonjour", "au revoir");
    printf("c = %s", c);
}

/*char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
	{
		return (0);
	}
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (0);
}*/