/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:52:40 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 16:56:02 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_H
# define FIREBALL_H

#include "Aspell.hpp"

class Fireball : public Aspell{

	public :
		Fireball(void);
		~Fireball(void);

		virtual Aspell *clone() const;
};

#endif