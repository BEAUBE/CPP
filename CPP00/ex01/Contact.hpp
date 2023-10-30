/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:28:43 by ajoliet           #+#    #+#             */
/*   Updated: 2023/10/30 00:27:29 by ajoliet          ###   ########.fr       */
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
		void	SetFirstName();
		void	SetLastName();
		void	SetNickname();
		void	SetNumber();
		void	SetSecret();
		void	DisplayContact(int i);
		bool	IsAlright();
	private:
		string	FirstName;
		string	LastName;
		string	Nickname;
		string	Number;
		string	Secret;
};
