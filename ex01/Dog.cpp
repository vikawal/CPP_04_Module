/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:59 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 15:49:24 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain(); ///new Brain object
	
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain (*copy._brain); // deep copy Brain object
}

Dog &Dog::operator=(Dog const &copy)
{
    std::cout << "Dog Assignment operator = called" << std::endl;
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

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain; // clean memory allocted
}

void Dog::makeSound(void) const
{
	std::cout << "Dog says GAFFFF and FRRRRRR" << std::endl;
}

void Dog::setIdea(size_t i, const std::string &idea)
{
    if (this->_brain != nullptr)
        this->_brain->setIdea(i, idea); // Call Brain's setIdea
    else
        std::cerr << "Error: Dog has no brain to set ideas!" << std::endl;
}

void Dog::getIdeas() const
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
// Brain *Dog::getBrain(void) const
// {
// 	return (this->_brain);
// }
// void	Dog::getIdeas(void)const
// {
// 	for (int i = 0; i < 3; i++)// change the 3 to 100 to show all ideas
// 		std::cout << "\tIdea " << i << " of the DOG is: \"" << this->_brain->getIdea(i) << std::endl;
// }

// // Setter
// void Dog::setIdea(size_t i, std::string idea)
// {
// 		this->_brain->setIdea(i, idea);
// }