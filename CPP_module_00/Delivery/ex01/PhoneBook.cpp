/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:54:26 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 16:12:48 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>

// constructor
PhoneBook::PhoneBook()
{
	this->index = 0;
	this->n_contacts = 0;
}

// destructor
PhoneBook::~PhoneBook()
{
}

bool	PhoneBook::checkInput(std::string &str, bool isPhoneNum)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (!std::isprint((unsigned char)c))
			return (false);
		if (isPhoneNum)
		{
			if (!std::isdigit((unsigned char)c) && c != '+')
			return (false);
		}
	}
	return (true);
}

bool	PhoneBook::addInfo(std::string &info, std::string infoName, bool isPhoneNum)
{
	std::string str;

	std::cout << "Enter " << infoName << ": ";
	if (std::getline(std::cin, str).fail())
		exit(EXIT_SUCCESS);
	if (str.empty())
		return (false);
	else if(!checkInput(str, isPhoneNum))
	{
		std::cout << "Invalid. Try again." << std::endl;
		return (false);
	}
	info = str;
	return (true);
}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	if (this->n_contacts == 8)
		std::cout << "Phonebook is full. Overwriting the oldest contact" << std::endl;
	while (!addInfo(firstName, "first name", false)) {}
	while (!addInfo(lastName, "last name", false)) {}
	while (!addInfo(nickname, "nickname", false)) {}
	while (!addInfo(phoneNumber, "phone number", true)) {}
	while (!addInfo(darkestSecret, "darkest secret", false)) {}
	this->index++;
	this->n_contacts++;
	if (this->index == 8)
		this->index = 0;
	if (this->n_contacts > 8)
		this->n_contacts = 8;
}


