/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:28:43 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/20 07:52:59 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Contact {
	public:
		Contact();
		~Contact();
		string	FirstName;
		string	LastName;
		string	Nickname;
		string	Number;
		string	Secret;
		bool	Exist;
		void	display();
	private:
};
