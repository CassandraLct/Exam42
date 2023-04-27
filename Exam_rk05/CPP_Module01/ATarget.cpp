/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:05:59 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 14:34:41 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) : type(""){}

ATarget::ATarget(std::string const & Type): type(Type){}

ATarget::ATarget(ATarget const & src){ *this = src;}

ATarget &	ATarget::operator=(ATarget const & rhs){

	if(this != &rhs){
		this->type = rhs.getType();
	}
	return *this;
}

ATarget::~ATarget(void){}

void	ATarget::getHitBySpell(Aspell const & src) const{

	std::cout << this->getType() << " has been " << src.getEffects() << "!" << std::endl;
}

std::string const &	ATarget::getType(void) const {return this->type;}
