/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:20 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 15:33:39 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
	private:
		Brain *_brain; //pointer to Brain class
	public:
		Dog(void); 
		Dog(const Dog &copy); 
		~Dog(void); // destructor
//overloaded operator =
		Dog &operator=(Dog const &copy);
	
		void makeSound(void) const;
	// Getter and Setter
		void setIdea(size_t i, const std::string &idea);
    	void getIdeas() const;
		
};

#endif
