/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:37:14 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/30 00:53:36 by ajoliet          ###   ########.fr       */
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
		if (!getline(cin, str))
			cout << "ouiooiuoiu" << endl;
//			break;
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else if (str == "EXIT")
			b = 1;
		else
			cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << endl;
	}
}
