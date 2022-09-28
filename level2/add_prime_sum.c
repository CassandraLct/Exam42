/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:08:31 by clecat            #+#    #+#             */
/*   Updated: 2022/09/21 15:51:19 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* write et exit; ecrire un programme qui prend un int positif en argument et
ecrit la somme de tout les nombres premiers inferieur ou egal a celui-ci suivi 
par un \n si nb arg n'est pas 1 ou le nb n'est pas positif, ecrire 0 suivi d'un \n*/

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	
	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return(0);
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n <= 9 && n != -2147483648)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void prime_sum(int nb)
{
	int nombre = 1;
	int i;
	int r = 0;
	int res = 0;
	
	while(nombre < nb)
	{
		r = 0;
		nombre++;
		i = 1;
		while(i <= nombre)
		{
			if((nombre % i) == 0)
				r++;
			i++;
		}
		if(r == 2)
			res = res + nombre;
	}
	ft_putnbr(res);
	
}

int main(int argc, char **argv)
{
	int nb;
	
    if (argc == 2)
    {
		nb = ft_atoi(argv[1]);
        if (nb > 0)
		{
			prime_sum(nb);
		}
    }
	else 
		write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}
