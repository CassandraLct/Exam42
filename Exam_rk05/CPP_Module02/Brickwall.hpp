/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:19:41 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:20:25 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_H
# define BRICKWALL_H

#include "ATarget.hpp"

class Brickwall : public ATarget{

	public :
		Brickwall(void);
		~Brickwall(void);

		virtual ATarget *clone() const;
};

#endif