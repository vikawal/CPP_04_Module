/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:02 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 15:49:06 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain; // new Brain creation
}
Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat COPY constructor called" << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain(*copy._brain); //  deep copy of Brain
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat overloaded operator = called" << std::endl;
	 if (this == &copy) // Self-assignment check
        return *this;

    // Copy the type from the Animal class
    this->_type = copy.getType();

    // Deep copy the Brain
    if (this->_brain)
        delete this->_brain; // Clean up existing Brain
    this->_brain = new Brain(*copy._brain);

    return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain; // clean memory allocted
}

void Cat::makeSound(void) const
{
	std::cout << "Cat says MIAUUUUUUUU and SHHHHHHHH" << std::endl;
}

void Cat::setIdea(size_t i, const std::string &idea)
{
    if (this->_brain != nullptr)
        this->_brain->setIdea(i, idea); // Call Brain's setIdea
    else
        std::cerr << "Error: Dog has no brain to set ideas!" << std::endl;
}

void Cat::getIdeas() const
{
    if (this->_brain != nullptr)
    {
        for (size_t i = 0; i < 100; ++i)
        {
            const std::string &idea = this->_brain->getIdea(i);
            if (!idea.empty()) // Print only non-empty ideas
                std::cout << "Idea[" << i << "]: " << idea << std::endl;
        }
    }
    else
    {
        std::cerr << "Error: Dog has no brain to retrieve ideas!" << std::endl;
    }
}