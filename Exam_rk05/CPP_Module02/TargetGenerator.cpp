/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:35:42 by clecat            #+#    #+#             */
/*   Updated: 2023/05/03 12:30:44 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void){}
TargetGenerator::~TargetGenerator(void){}

void	TargetGenerator::learnTargetType(ATarget *src){

	if(src)
		arr_target.insert(std::pair<std::string, ATarget *>(src->getType(), src->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &type){

	std::map<std::string, ATarget *>::iterator it = arr_target.find(type);
	if (it != arr_target.end())
		delete it->second;
	arr_target.erase(type);
}

ATarget*	TargetGenerator::createTarget(std::string const &type){

	std::map<std::string, ATarget *>::iterator it = arr_target.find(type);
	if (it != arr_target.end())
		return arr_target[type];
	return NULL;
}
