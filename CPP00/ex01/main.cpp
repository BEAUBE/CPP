/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:37:14 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 11:14:28 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	std::string	str;
	PhoneBook	phonebook;

	std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
	for (bool b = 0; b == 0;)
	{
		if (!getline(std::cin, str))
			break;
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else if (str == "EXIT")
			b = 1;
		else
			std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
	}
}
