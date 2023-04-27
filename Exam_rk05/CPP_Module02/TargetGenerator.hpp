/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:31:28 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:38:50 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

#include "ATarget.hpp"

class TargetGenerator{

	public:
		TargetGenerator(void);
		virtual ~TargetGenerator(void);

		void	learnTargetType(ATarget *src);
		void	forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &type);

	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &	operator=(TargetGenerator const & rhs);
};

#endif