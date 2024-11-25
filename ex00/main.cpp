/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:14 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/12 15:20:33 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete cat;
	delete dog;
	delete meta;

	std::cout << "----------------------------------------" << std::endl;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << " " << std::endl;
	catWrong->makeSound();
	std::cout << "----------------------------------------" << std::endl;
	metaWrong->makeSound();
	delete metaWrong;
	delete catWrong;

	std::cout << "-------------------NOW IT IS DIFFERENT---------------------" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}
