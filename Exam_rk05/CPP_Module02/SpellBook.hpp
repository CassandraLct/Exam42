/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:31 by clecat            #+#    #+#             */
/*   Updated: 2023/05/03 12:32:06 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_H
# define SPELLBOOK_H

#include "Aspell.hpp"
#include <map>

class SpellBook{

	public:
		SpellBook(void);
		virtual ~SpellBook(void);

		void	learnSpell(Aspell *cpy);//copy a spell in the book
		void	forgetSpell(std::string const &spell); //that deletes a spell from the book, except if it isn't there
		Aspell *	createSpell(std::string const & src); //that receives a string corresponding to the name of a spell, creates it, and returns it.

	private:
		std::map<std::string, Aspell *> arr_spell;
		SpellBook(SpellBook const & src);
		SpellBook &	operator=(SpellBook const & rhs);
};

#endif