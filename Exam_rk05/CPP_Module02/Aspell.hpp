/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aspell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:16:18 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 14:31:43 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
# define ASPELL_H

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Aspell{

	public:
		Aspell(void);
		Aspell(std::string const & name, std::string const & effects);
		Aspell(Aspell const & src);
		Aspell &	operator=(Aspell const & rhs);
		virtual ~Aspell(void);

		std::string	const &		getName(void) const;
		std::string	const &		getEffects(void) const;

		virtual Aspell *clone() const = 0;
		void	launch(ATarget const & src) const;
	
	protected:
		std::string name;
		std::string effects;
};

#endif
