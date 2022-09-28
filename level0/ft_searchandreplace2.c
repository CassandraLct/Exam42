/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchandreplace2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:31:06 by clecat            #+#    #+#             */
/*   Updated: 2022/09/01 10:41:39 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*fonction autorisee write et exit 
ecrire un programme appele search and replace qui prend 3 arguments, le premier
est une chaine de caractere ou on va chercher la lettre (2eme arg) et la remplacer
par une autre (le 3eme arg)
si argv != 3 write "\n"; si le 2eme arg n'est pas presente dans la string 
on ecrit la string suivis d'un \n*/

int main(int argc, char **argv)
{
    int i = 0;
    
    if(argc == 4)
    {
        while(argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
        }    
    }
    write(1, "\n", 1);
    return (0);
}