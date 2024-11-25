/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:26 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 12:06:51 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <math.h>
// #include "Brain.hpp"

/* NEW keyword VIRTUAL!!!*/
class Animal
{
	protected:
		std::string _type;
		
	public:
	//constructor
		Animal(void); //by default
		Animal(const Animal &copy); // full new object copy is created
		virtual ~Animal(void); // destructor
//overloaded operator =
		Animal &operator=(Animal const &copy);
		
		const std::string &getType(void) const;
		virtual void makeSound(void) const;
		//new
		// virtual Brain* getBrain(void) const = 0;
		
		
};

#endif
