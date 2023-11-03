/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:09 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/03 18:39:35 by ajoliet          ###   ########.fr       */
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
	if (!(tmp.SetFirstName() && tmp.SetLastName() && tmp.SetNickname() && tmp.SetNumber() && tmp.SetSecret()))
		return ;
	if (tmp.IsAlright())
	{
		for (int i = 7; i; i--)
			contact[i] = contact[i - 1];
		contact[0] = tmp;
		std::cout << "Congrats, your contact has been created" << std::endl;
		NbrContacts += 1;
	}
	else
		std::cout << "You must fill every information asked to create a new contact" << std::endl;
}

int	GoodIndex(std::string str, int NbrContacts)
{
	char c;
	int	n;

	if (str.length() != 1)
		return (0);
	c = str[0];
	if (!isdigit(c))
		return (0);
	n = c - '0';
	if (n > 8 || n < 0 || n > NbrContacts)
		return (0);
	return (n);
}

int	PhoneBook::search()
{
	std::string str;
	int	index;

	std::cout << "-----------------contacts------------------" << std::endl;
	std::cout << "index_____|first_name|last_name_|nickname__" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contact[i].DisplayContact(i);
	}
	std::cout << "enter a contact index to see all details : ";
	if (!getline(std::cin, str))
		return (0);
	if (!(index = GoodIndex(str, NbrContacts)))
		std::cout << "please enter a valid index" << std::endl;
	else
		contact[index - 1].AllInfo();
	return (1);
	
}
