/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:33:05 by clecat            #+#    #+#             */
/*   Updated: 2022/09/20 14:36:16 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

//ma version valider en exam
unsigned char swap_bits(unsigned char octet)
{
	unsigned char res;

	res = (octet >> 4 | octet << 4);
	return (res);	
}