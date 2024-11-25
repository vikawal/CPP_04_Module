/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:51:07 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:12:35 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("")
{
	std::cout << "WrongAnimal default constructor called ->>" << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAnimal ->> " << this->_type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal COPY constructor called" << std::endl;
	
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes a sound of a WRONG animal." << std::endl;
	std::cout << "Here makeSound is not declared as VIRTUAL," << std::endl;
	std::cout << "when called from a derived class it executes from the base class - Animal" << std::endl;
}