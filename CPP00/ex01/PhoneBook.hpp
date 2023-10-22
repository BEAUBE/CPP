/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:52:03 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/19 17:20:59 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		Contact contact[8];
		Contact tmp;
		void	newcontact();
		void	display();
	private:
};
