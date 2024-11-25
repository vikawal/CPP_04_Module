/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:26 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:08:51 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

/* NEW keyword VIRTUAL!!!*/
class Animal
{
	protected:
		std::string _type;
		
	public:
	//constructor
		Animal(void); //by default
		Animal(std::string const &type); //with type
		Animal(const Animal &copy); // full new object copy is created
		virtual ~Animal(void); // destructor
	//overloaded operator =
		Animal &operator=(Animal const &copy);
		
		// getter
		const std::string &getType(void) const;
		
		//member function
		virtual void makeSound(void) const;
		
		
};

#endif
