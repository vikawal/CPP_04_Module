/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:48:08 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 13:59:17 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(const WrongAnimal &copy); 
		virtual ~WrongAnimal(void); 

		WrongAnimal &operator = (WrongAnimal const &toCopy);

		std::string const &getType(void) const;
		void setType(std::string const &type);
		//member
		void makeSound(void) const;
};
#endif

/* As the function makeSound is not declared as virtual,
when called from a derived class it executes from the base class */