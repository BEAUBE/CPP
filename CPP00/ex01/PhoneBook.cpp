/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:09 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 07:00:51 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){NbrContacts = 0;}

PhoneBook::~PhoneBook(){}

void	PhoneBook::add()
{
	Contact	tmp;
	std::cout << "creating new contact..." << std::endl;
	tmp.SetFirstName();
	tmp.SetLastName();
	tmp.SetNickname();
	tmp.SetNumber();
	tmp.SetSecret();
	if (tmp.IsAlright())
	{
		contact[7] = contact[6];
		contact[6] = contact[5];
		contact[5] = contact[4];
		contact[4] = contact[3];
		contact[3] = contact[2];
		contact[2] = contact[1];
		contact[1] = contact[0];
		contact[0] = tmp;
		std::cout << "Congrats, your contact has been created" << std::endl;
		NbrContacts += 1;
	}
	else
		std::cout << "You must fill every information asked to create a new contact" << std::endl;
}

void	PhoneBook::search()
{
	std::string str;

	std::cout << "-----------------contacts------------------" << std::endl;
	std::cout << "index_____|first_name|last_name_|nickname__" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contact[i].DisplayContact(i);
	}
	std::cout << "enter a contact index to see all details : ";
	std::cin >> str;
}
//faire en sorde de pas display le contact
