/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:50:22 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 10:15:59 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::SetFirstName() {
		std::cout << "What is the first name of this contact ?" << std::endl;
	getline(std::cin, FirstName); }

void	Contact::SetLastName() {
	std::cout << "What is the last name of this contact ?" << std::endl;
	getline(std::cin, LastName); }

void	Contact::SetNickname() {
	std::cout << "What is the nickname of this contact ?" << std::endl;
	getline(std::cin, Nickname); }

void	Contact::SetNumber() {
	std::cout << "What is the number of this contact ?" << std::endl;
	getline(std::cin, Number); }

void	Contact::SetSecret() {
	std::cout << "What is the deepest secret of this contact ?" << std::endl;
	getline(std::cin, Secret); }

void	Contact::DisplayContact(int i)
{
		std::cout << std::setw(10) << i + 1 << "|";
		if (FirstName.length() > 10)
			std::cout << FirstName.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << FirstName << "|";
		if (LastName.length() > 10)
			std::cout << LastName.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << LastName << "|";
		if (Nickname.length() > 10)
			std::cout << Nickname.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << Nickname << "|";
		std::cout << std::endl;
}

void	Contact::AllInfo() {
		std::cout << "First Name : " << FirstName << std::endl
			<< "Last Name : " << LastName << std::endl
			<< "Nickname : " << Nickname << std::endl
			<< "Number : " << Number << std::endl
			<< "Secret : " << Secret << std::endl;
}

bool	Contact::IsAlright() {
	if (FirstName.length() && LastName.length() && Nickname.length() && Number.length() && Secret.length())
		return (1);
	return (0);
}
