/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:24:03 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 15:29:03 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

#include <iostream>
#include <map>
#include "Aspell.hpp"
#include "ATarget.hpp"

class Warlock{

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const &		getName(void) const;
		std::string const &		getTitle(void) const;
		void					setTitle(std::string const & title);
		void					introduce() const;

		void					learnSpell(Aspell *spell);
		void					forgetSpell(std::string spell_name);
		void					launchSpell(std::string spell_name, ATarget const &spell);

	private:
		std::string name;
		std::string title;
		std::map<std::string, Aspell *> arr_spell;

		Warlock(void);	
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
};

#endif
