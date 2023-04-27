/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:59:53 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:16:09 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_H
# define POLYMORPH_H

#include "Aspell.hpp"

class Polymorph : public Aspell{

	public:
		Polymorph(void);
		~Polymorph(void);

		virtual Aspell *clone() const;
};

#endif