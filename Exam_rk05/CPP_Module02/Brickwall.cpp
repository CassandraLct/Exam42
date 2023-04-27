/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:20:41 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:21:12 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brickwall.hpp"

Brickwall::Brickwall(void) : ATarget("Inconspicuous Red-brick Wall"){}

Brickwall::~Brickwall(void){}

ATarget	*Brickwall::clone() const{

	return (new Brickwall());
}