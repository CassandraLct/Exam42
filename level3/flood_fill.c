/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:40:54 by clecat            #+#    #+#             */
/*   Updated: 2022/09/28 11:18:35 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

/*Écrivez une fonction qui prend un char ** comme tableau bidimensionnel de chars,
un t_point comme dimensions de ce tableau et un t_point comme point de départ.

A partir du point de départ t_point donné, cette fonction remplit une 
zone entière en remplaçant les caractères à l'intérieur par le caractère 'F'. 
Une zone est un groupe d'un même caractère délimité horizontalement et verticalement 
par d'autres caractères ou la limite du tableau.
La fonction flood_fill ne remplit pas en diagonale.

The flood_fill function will be prototyped like this:
void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this:

typedef struct  s_point
{
	int   x;
	int   y;
}               t_point;

Example:
$> cat test.c
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>*/

void	flood_fill(char **tab, t_point size, t_point begin)
{
	int i = 0;
	int j = 0;
	char c = tab[begin.y][begin.x];
	
	while(tab[i] && i != size.y)
	{
		while(tab[i][j] != '\0')
		{
			if(tab[i][j] == c)
				tab[i][j] = 'F';
			j++;
		}
		j = 0;
		i++;
	}	
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {5, 3};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

/*void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if(cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void 	flood_fill(char **tab, t_point size, t_point begin);
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}*/
