/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:59:37 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 15:41:31 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
# define ATARGET_H

#include <iostream>
#include "Aspell.hpp"

class Aspell;

class	ATarget{

	private:
		std::string type;

	public:
		ATarget(void);
		ATarget(std::string const & Type);
		ATarget(ATarget const & src);
		ATarget &	operator=(ATarget const & rhs);
		virtual ~ATarget(void);

		std::string const &		getType(void) const;
		virtual ATarget *clone() const = 0;

		void	getHitBySpell(Aspell const & src) const;
};

#endif
