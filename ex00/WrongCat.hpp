/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:05:59 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/14 14:14:22 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat(void);
		WrongCat(std::string const &type);
		WrongCat(const WrongCat &copy);
		~WrongCat(void);
		WrongCat &operator = (WrongCat const &toCopy);


		void makeSound(void) const;
};

#endif