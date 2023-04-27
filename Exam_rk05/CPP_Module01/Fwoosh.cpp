/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:41:04 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 14:46:08 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : Aspell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(void){}

Aspell *Fwoosh::clone(void) const{

	return (new Fwoosh());
}
