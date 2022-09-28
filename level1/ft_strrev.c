/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:41:01 by clecat            #+#    #+#             */
/*   Updated: 2022/09/19 14:11:28 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

char    *ft_strrev(char *str)
{
    int i = -1;
    char tmp = str[i];
	int len = 0;

	while(str[len])
		len++;
	while(++i < --len)
	{
		str[i] = str[len];
		str[len] = tmp;
	}
	return(str);
}

int main()
{
	char *str;

	str = ft_strrev("bonjour je suis la");
	printf("%s\n", str);
}


/*char *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char temporary = str[i];

	while (str[length])
		length++;
	while (++i < --length)
	{
		str[i] = str[length];
		str[length] = temporary;
	}
	return (str);
}*/