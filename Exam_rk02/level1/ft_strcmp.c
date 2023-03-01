/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:35:47 by clecat            #+#    #+#             */
/*   Updated: 2022/09/19 13:00:14 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).
La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier 
négatif, nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure
à s2
Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);*/

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while(s1[i] != '\0' && s2[i] != '\0' &&  s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}