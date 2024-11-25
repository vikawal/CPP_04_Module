/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:26 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 16:46:10 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <math.h>
// #include "Brain.hpp"


class Animal
{
	protected:
		std::string _type;
		//new!!
		//The default constructor is now protected, 
    	// so you can't directly instantiate an Animal object.
		Animal(void); 
		
	public:
	//constructor
		
		Animal(const Animal &copy); // full new object copy is created
		virtual ~Animal(void); // destructor
//overloaded operator =
		Animal &operator=(Animal const &copy);
		
		const std::string &getType(void) const;
		//public method NEW
		virtual void makeSound(void) const = 0; // pure virtual method
		
};

#endif

/*Animal class cannot be instantiated because makeSound() is a pure virtual function. 
The Dog and Cat classes must implement makeSound() to become concrete (instantiable) classes.*/