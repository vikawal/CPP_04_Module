/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:02 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:10:22 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	
}

// Cat::Cat(std::string const &type):Animal(type), _type("Cat")
// {
// 	std::cout << "Cat from Animal is created." << std::endl;
// }

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "Cat COPY constructor called" << std::endl;

}

Cat &Cat::operator = (Cat const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat says MIAUUUUUUUU and SHHHHHHHH" << std::endl;
}

