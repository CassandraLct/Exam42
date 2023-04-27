/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:50:56 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 15:42:14 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_H
# define DUMMY_H

#include "ATarget.hpp"

class Dummy : public ATarget{

	public :
		Dummy(void);
		~Dummy(void);

		virtual ATarget *clone() const;
};

#endif
