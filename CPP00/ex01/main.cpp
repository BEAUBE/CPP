/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:37:14 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/18 17:10:34 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	string	str;
	PhoneBook	phonebook;

	cout << "Enter a command (ADD, SEARCH, EXIT)" << endl;
	for (bool b = 0; b == 0;)
	{
		getline(cin, str);
		if (str == "ADD")
			phonebook.newcontact();
			//cout << "add str" << endl;
		else if (str == "SEARCH")
			phonebook.display();
			//cout << "print phonebook" << endl;
		else if (str == "EXIT")
			b = 1;
		else
			cout << "apprends à écrire t bete ou quoi" << endl;
	}
}
