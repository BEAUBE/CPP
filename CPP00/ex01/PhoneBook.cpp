/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:09 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/30 02:16:30 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;

PhoneBook::PhoneBook(){NbrContacts = 0;}

PhoneBook::~PhoneBook(){}

void	PhoneBook::add()
{
	Contact	tmp;
	cout << "creating new contact..." << endl;
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
		cout << "Congrats, your contact has been created" << endl;
		NbrContacts += 1;
	}
	else
		cout << "You must fill every information asked to create a new contact" << endl;
}

void	PhoneBook::search()
{
	string str;
	static int	nbr_contact;

	cout << "-----------------contacts------------------" << endl;
	cout << "index_____|first_name|last_name_|nickname__" << endl;
	for (int i = 0; i < 8; i++)
	{
		contact[i].DisplayContact(i);
	}
	cout << "enter a contact index to see all details : ";
	cin >> str;
}
