/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:01:07 by vmyshko           #+#    #+#             */
/*   Updated: 2024/11/19 16:08:32 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain 
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &copy);
		// virtual ~Brain(void);
		virtual ~Brain(void);

		Brain &operator=(const Brain &copy);

		// Getter
		// const std::string getIdea(size_t i)const;
		const std::string& getIdea(size_t i) const;
	// Setter
		// void setIdea(size_t i, const std::string& idea);
		void	setIdea(size_t i, std::string idea);
};

#endif