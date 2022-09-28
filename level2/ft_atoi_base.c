/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:07:24 by clecat            #+#    #+#             */
/*   Updated: 2022/09/05 16:32:02 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/

char	to_lower(char c)
{
	if(c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int	get_digit(char c, int digit_base)
{
	int max_digit;
	
	if (digit_base <= 10)
		max_digit = digit_base + '0';
	else
		max_digit = digit_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return(c - '0');
	if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return(-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
	int sign = 1;
	int digit;

	if(*str == '-')
	{
		sign *= -1;
		++str;
	}
	while((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return(result);
}

int main()
{
	int res;
    //changer une chaine en base N (inferieur ou egal a 16) en int en base 10 
    res = ft_atoi_base("12", 11);
	printf("res = %d\n", res);
	return(0);
}