/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:56:09 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 16:57:42 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void): Aspell("Fireball", "burnt to a crisp"){}

Fireball::~Fireball(void){}

Aspell *Fireball::clone(void) const{

	return (new Fireball());
}