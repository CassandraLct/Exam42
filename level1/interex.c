/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 08:30:17 by clecat            #+#    #+#             */
/*   Updated: 2022/01/17 08:47:12 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char verif(char a, char *str)
{
	int i;

	i = 0;
	while(str[i] != a && str[i])
		i++;
	while(str[i] != '\0')
		return(1);
	return(0);
}

void inter(char *str1,char *str2)
{
	int i;
	int x;
	int y;
	char check[255];

	i = 0;
	x = 0;
	y = 0;
	while(str1[i] != '\0')
	{
		while(str2[y] != '\0')
		{
			if(str1[i] == str2[y])
			{
				if(verif(str1[i], check) == 0)
				{
					write(1, &str1[i], 1);
					check[x] = str1[i];
					x++;
				}
			}
			y++;
		}
		y = 0;
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
