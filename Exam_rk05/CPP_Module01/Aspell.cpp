/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aspell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:25:26 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 14:33:52 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aspell.hpp"

Aspell::Aspell(void) : name(""), effects(""){}

Aspell::Aspell(std::string const & name, std::string const & effects): name(name), effects(effects){}

Aspell::Aspell(Aspell const & src){

	*this = src;
}

Aspell &	Aspell::operator=(Aspell const & rhs){

	if(this != &rhs){
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return *this;
}

Aspell::~Aspell(void){}

std::string const &	Aspell::getName(void) const{ return this->name;}

std::string const & Aspell::getEffects(void) const { return this->effects;}

void	Aspell::launch(ATarget const & src) const{

	src.getHitBySpell((*this));
}

