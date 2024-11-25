/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:20 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:14:04 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal 
{
	private:
		
	public:
		Dog(void);
		Dog(const Dog &copy); 
		~Dog(void); // destructor
//overloaded operator =
		Dog &operator = (Dog const &toCopy);

	//member function
		void makeSound(void) const;
		
		
};

#endif
