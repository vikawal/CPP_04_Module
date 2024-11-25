/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:35 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:14:10 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal //inheritance
{
	private:
		
	public:
		Cat(void);
		Cat(const Cat &copy); 
		~Cat(void); // destructor
//overloaded operator =
	
		Cat &operator = (Cat const &toCopy);
		
		//member functions - methods by SUBJECT
		void makeSound(void) const;
		
		
};

#endif