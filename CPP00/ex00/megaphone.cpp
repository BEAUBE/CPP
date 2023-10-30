/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:14 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/26 13:54:24 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(int ac, char **av)
{
	string	str;

	if (ac == 1)
	{
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
			return (0);
	}
	for (int i = 1; i < ac; i++)
		str.append(av[i]);
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	cout << str << endl;
}
