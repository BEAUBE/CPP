/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:14 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 06:06:00 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
		std::string	str;

	if (ac == 1)
	{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			return (0);
	}
	for (int i = 1; i < ac; i++)
		str.append(av[i]);
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	std::cout << str << std::endl;
}
