/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:52:03 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/27 19:13:49 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		int		NbrContacts;
	private:
		Contact contact[8];
};
