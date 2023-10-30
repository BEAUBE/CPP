/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:22 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/27 18:47:24 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
using namespace std;

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::SetFirstName() {
	cout << "What is the first name of this contact ?" << endl;
	getline(cin, FirstName); }

void	Contact::SetLastName() {
	cout << "What is the last name of this contact ?" << endl;
	getline(cin, LastName); }

void	Contact::SetNickname() {
	cout << "What is the nickname of this contact ?" << endl;
	getline(cin, Nickname); }

void	Contact::SetNumber() {
	cout << "What is the number of this contact ?" << endl;
	getline(cin, Number); }

void	Contact::SetSecret() {
	cout << "What is the deepest secret of this contact ?" << endl;
	getline(cin, Secret); }

void	Contact::DisplayContact(int i)
{
		cout << setw(10) << i + 1 << "|";
		if (FirstName.length() > 10)
			cout << FirstName.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << FirstName << "|";
		if (LastName.length() > 10)
			cout << LastName.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << LastName << "|";
		if (Nickname.length() > 10)
			cout << Nickname.substr(0, 9) << "." << "|";
		else
			cout << setw(10) << Nickname << "|";
		cout << endl;
}

bool	Contact::IsAlright() {
	if (FirstName.length() && LastName.length() && Nickname.length() && Number.length() && Secret.length())
		return (1);
	return (0);
}
