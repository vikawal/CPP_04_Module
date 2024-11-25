/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:51 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:09:09 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal:: Animal(void) : _type("")
{

	std::cout << "ANIMAL Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal created." << std::endl;
}

Animal:: Animal(const Animal &copy)
{
	std::cout << "ANIMAL Copy constructor called" << std::endl;
	*this = copy; //COPY value of the copied object -> the new one (using the assignment operator =).
}

Animal& Animal::operator = (Animal const &copy)
{
	this->_type = copy.getType();
	std::cout << "Assigment operator called for COPY of" << this->_type << std::endl;
	return (*this);
	
}

Animal::~ Animal(void)
{
	std::cout << "ANIMAL Destructor called" << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (this->_type);
}

// void Animal::setType(std::string const &type)
// {
// 	this->_type = type;
// }

void Animal::makeSound(void) const
{
	std::cout << "ANIMAL makeSound called. But turtle is silent animal =-)" << std::endl;
}



