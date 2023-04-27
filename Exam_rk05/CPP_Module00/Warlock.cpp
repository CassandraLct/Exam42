/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:24:03 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 12:41:38 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {

	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void){
	
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string const & 	Warlock::getName(void) const {

	return this->name;
}

std::string const &		Warlock::getTitle(void) const {

	return this->title;
}

void	Warlock::setTitle(std::string const & title){
	
	this->title = title;
}

void	Warlock::introduce() const{

	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}
