/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:09 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/20 08:55:35 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::newcontact()
{
	Contact	tmp;
	cout << "creating new contact..." << endl;
	cout << "What is the first name of this contact ?" << endl;
	getline(cin, tmp.FirstName);
	cout << "What is the last name of this contact ?" << endl;
	getline(cin, tmp.LastName);
	cout << "What is the nickname of this contact ?" << endl;
	getline(cin, tmp.Nickname);
	cout << "What is the number of this contact ?" << endl;
	getline(cin, tmp.Number);
	cout << "What is the deepest secret of this contact ?" << endl;
	getline(cin, tmp.Secret);
	if (tmp.FirstName.length() && tmp.LastName.length() && tmp.Nickname.length() && tmp.Number.length() && tmp.Secret.length())
	{
		contact[7] = contact[6];
		contact[6] = contact[5];
		contact[5] = contact[4];
		contact[4] = contact[3];
		contact[3] = contact[2];
		contact[2] = contact[1];
		contact[1] = contact[0];
/*		for (int i = 2; i < 7; i++)
		{
			contact[i] = contact[i - 1];
			cout << "oui" << i;
		}*/
		contact[0] = tmp;
		cout << "Congrats, your contact has been created" << endl;
	}
	else
		cout << "You must fill every information asked to create a new contact" << endl;
}

void	PhoneBook::display()
{
	cout << "-----------------contacts------------------" << endl;
	cout << "index_____|first_name|last_name_|nickname__" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << setw(10) << i + 1 << "|";
		if (contact[i].FirstName.length() > 10)
			cout << contact[i].FirstName.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << contact[i].FirstName << "|";
		if (contact[i].LastName.length() > 10)
			cout << contact[i].LastName.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << contact[i].LastName << "|";
		if (contact[i].Nickname.length() > 10)
			cout << contact[i].Nickname.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << contact[i].Nickname << "|";
		cout << endl;
		//contact[i].display();
	}
}
