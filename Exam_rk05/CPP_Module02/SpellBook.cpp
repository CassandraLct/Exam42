/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:26 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:30:24 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void){}

SpellBook::~SpellBook(void){}

void	SpellBook::learnSpell(Aspell *cpy)//copy a spell in the book
{}
void	SpellBook::forgetSpell(std::string const &spell) //that deletes a spell from the book, except if it isn't there
{}

Aspell *	SpellBook::createSpell(std::string const & src) //that receives a string corresponding to the name of a spell, creates it, and returns it.
{}