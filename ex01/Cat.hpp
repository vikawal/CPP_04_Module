/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:13:35 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 15:33:55 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal //inheritance
{
	private:
		Brain* _brain; //pointer to Brain class
	public:
		Cat(void); 
		Cat(const Cat &copy); 
		~Cat(void); // destructor
//overloaded operator =
		Cat &operator=(Cat const &copy);
		
		void makeSound(void) const;
		//new
		// Getter and Setter
		void setIdea(size_t i, const std::string &idea);
    	void getIdeas() const;
		
		
};

#endif