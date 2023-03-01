/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:25:22 by clecat            #+#    #+#             */
/*   Updated: 2022/09/06 11:35:50 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_rrange(int start, int end)
{
    int *tab;
    int lenght;
    
    if(end < start)
        lenght = start - end;
    else 
        lenght = end - start;
    tab = malloc(sizeof(int) * lenght + 1);
    while(lenght >= 0)
    {
        tab[lenght] = start;
        if(end > start)
            start++;
        else
            start--;
        lenght--;
    }
    return(tab);
}

/*int main()
{
    int *tab;
    int x = 2;

    tab = ft_rrange(1, 3);
    printf("tab = %d\n", tab[x]);
}*/