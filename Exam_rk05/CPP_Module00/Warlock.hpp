/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:10:30 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 12:39:12 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

#include <iostream>

class Warlock{

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const &		getName(void) const;
		std::string const &		getTitle(void) const;
		void					setTitle(std::string const & title);
		void					introduce() const;

	private:
		std::string name;
		std::string title;	
		Warlock(void);	
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
};

#endif
