/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:24:03 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 15:53:35 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {

	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void){
	
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	std::map<std::string, Aspell *>::iterator it_begin = this->arr_spell.begin();
    std::map<std::string, Aspell *>::iterator it_end = this->arr_spell.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    this->arr_spell.clear();
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

	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void	Warlock::learnSpell(Aspell *spell){

	if(spell)
		arr_spell.insert(std::pair<std::string, Aspell *>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(std::string spell_name){

	std::map<std::string, Aspell *>::iterator it = arr_spell.find(spell_name);
	if(it != arr_spell.end())
		delete it->second;
	arr_spell.erase(spell_name);
}

void	Warlock::launchSpell(std::string spell_name, ATarget const &spell){
	Aspell *spell1 = arr_spell[spell_name];
	if(spell1)
		spell1->launch(spell);
}
