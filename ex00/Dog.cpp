/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:59 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:10:36 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called "<< std::endl;
	
}

// Dog::Dog(std::string const &type): _type("Dog")
// {
// 	std::cout << "Dog from Animal created." << std::endl;
// }

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "Dog from Animal copied." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator = (Dog const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog says GAFFFF and FRRRRRR " << std::endl;
}
