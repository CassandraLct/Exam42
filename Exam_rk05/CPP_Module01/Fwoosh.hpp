/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:35:31 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 14:40:56 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
# define FWOOSH_H

#include "Aspell.hpp"

class Fwoosh : public Aspell{

	public:
		Fwoosh(void);
		~Fwoosh(void);

		virtual Aspell *clone() const;
};

#endif
