/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:19 by clecat            #+#    #+#             */
/*   Updated: 2022/09/28 10:44:05 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

char    **ft_split(char *str)
{
    char **tab;
    int i = 0;
    int word = 0;
    int len_w[4];
	int j = 0;
	int k = 0;
	int y = 0;
    
    while(str[i] != '\0')
    {
        while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while(str[i] >= 33 && str[i] <= 126)
		{
			j++;
			if(str[i + 1] == 32 || (str[i + 1] >= 9 && str[i + 1] <= 13) 
				|| (str[i + 1] == '\0'))//  && (str[i] != 32 || (str[i] < 9 && str[i] > 13))))
			{
				word += 1;
				len_w[y] = j;
				y++;
			}
			i++;
		}
		j = 0;
		i++;
    }
	//printf("word = %d\n", word);
	i = 0;
	y = 0;
	tab = malloc(sizeof(char *) * word + 1);
	j = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 33 && str[i] <= 126)
		{
			//printf("len_w = %d\n", len_w[y]);
			tab[y] = malloc(sizeof(char) * len_w[y] + 1);
			y++;	
		}
		while(str[i] >= 33 && str[i] <= 126)
		{
			tab[j][k] = str[i];
			//printf("str[i] = %c\n", str[i]);
			k++;
			i++;
			if(str[i + 1] == 32 || str[i + 1] == '\0' || (str[i + 1] >= 9 && str[i + 1] <= 13))
			{
				//printf("str[i] = %c\n", str[i]);
				tab[j][k] = str[i];
				if(str[i] != '\0')
					tab[j][k + 1] = '\0';
				j += 1;
				i++;
			}
		}
		k = 0;
		if(str[i] != '\0')
			i++;
	}
	tab[j] = NULL;
	j = 0;
	while(tab[j])
	{
		printf("tab[%d] = %s\n", j , tab[j]);
		j++;
	}
    return(tab);
}

int main()
{
	ft_split("         Comment ca va ?		");
	return(0);
}