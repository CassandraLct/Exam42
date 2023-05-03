/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:26 by clecat            #+#    #+#             */
/*   Updated: 2023/05/03 12:36:07 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void){}

SpellBook::~SpellBook(void){}

void	SpellBook::learnSpell(Aspell *cpy)//copy a spell in the book
{
	if(cpy)
		arr_spell.insert(std::pair<std::string, Aspell*>(cpy->getName(), cpy->clone()));
}
void	SpellBook::forgetSpell(std::string const &spell) //that deletes a spell from the book, except if it isn't there
{
	std::map<std::string, Aspell *>::iterator it = arr_spell.find(spell);
	if (it != arr_spell.end())
		delete it->second;
	arr_spell.erase(spell);
}

Aspell *	SpellBook::createSpell(std::string const & src) //that receives a string corresponding to the name of a spell, creates it, and returns it.
{
	std::map<std::string, Aspell *>::iterator it = arr_spell.find(src);
	if (it != arr_spell.end())
		return arr_spell[src];
	return NULL;
}