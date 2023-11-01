/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:28:43 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 09:38:27 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

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
		void	AllInfo();
		bool	IsAlright();
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	Number;
		std::string	Secret;
};
