/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:28:43 by ajoliet           #+#    #+#             */
/*   Updated: 2023/11/01 17:19:51 by ajoliet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();
		int		SetFirstName();
		int		SetLastName();
		int		SetNickname();
		int		SetNumber();
		int		SetSecret();
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
