/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:11:18 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 16:09:31 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain COPY constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain const &copy)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain Assignation operator called" << std::endl;
	// if (this == &copy)
	// 	return *this;
	// for (int i = 0; i < 100; i++)
	// {
	// 	if (copy.ideas[i].length() > 0)
	// 		this->ideas[i].assign(copy.ideas[i]);
	// }
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

// Getter
// const std::string	Brain::getIdea(size_t i)const
// {
// 	if (i < 100)
// 		return(this->ideas[i]);
// 	else
// 		return ("There is only 100 ideas per brain.");
// }

const std::string& Brain::getIdea(size_t i) const 
{
    if (i >= 100) {
        throw std::out_of_range("Index out of range in Brain::getIdea");
    }
    return this->ideas[i];
}



//Setter
void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "There is only 100 ideas per brain." << std::endl;
}

// void Brain::setIdea(size_t i, const std::string& idea) 
// {
//     if (i >= 100) {
//         throw std::out_of_range("Index out of range in Brain::setIdea");
//     }
//     this->ideas[i] = idea;
// }