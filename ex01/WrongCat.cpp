/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:08:51 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:11:00 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

// WrongCat::WrongCat(std::string const &type):WrongAnimal(type), _type("WrongCat")
// {
// 	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " created." << std::endl;
// }

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "WrongCat Copy constructor called" << std::endl;
	
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator = (WrongCat const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makeSound called. It is also MIAUUU ->>" << std::endl;
}

