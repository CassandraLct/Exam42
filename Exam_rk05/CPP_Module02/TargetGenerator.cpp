/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:35:42 by clecat            #+#    #+#             */
/*   Updated: 2023/04/27 17:38:45 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void){}
TargetGenerator::~TargetGenerator(void){}

void	TargetGenerator::learnTargetType(ATarget *src){}

void	TargetGenerator::forgetTargetType(std::string const &type){}

ATarget*	TargetGenerator::createTarget(std::string const &type){}
