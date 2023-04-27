/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:59:56 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:18:19 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void) : Aspell("Polymorph", "turned into a critter"){}

Polymorph::~Polymorph(void){}

Aspell  *Polymorph::clone() const{

    return (new Polymorph());
}