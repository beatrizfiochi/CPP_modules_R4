/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:54:26 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 19:08:13 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>

// Constructor
PhoneBook::PhoneBook()
{
	this->index = 0;
	this->n_contacts = 0;
}

// Destructor
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

	this->contacts[this->index].setFirstName(firstName);
	this->contacts[this->index].setLastName(lastName);
	this->contacts[this->index].setNickname(nickname);
	this->contacts[this->index].setPhoneNumber(phoneNumber);
	this->contacts[this->index].setDarkestSecret(darkestSecret);

	this->index = (this->index + 1) % 8;
	if (this->n_contacts < 8)
		this->n_contacts++;

	std::cout << "Contact added" << std::endl;
}

void	PhoneBook::printInfo(std::string &str) const
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	std::cout << std::setw(10) << str;
}

void	PhoneBook::printList() const
{
	std::cout << "Contacts:" << std::endl;
	std::cout << std::setw(10) << "Index" << " | "
		<< std::setw(10) << "First name" << " | "
		<< std::setw(10) << "Last name" << " | "
		<< std::setw(10) << "Nickname" << " | " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for (int i = 0; i < this->n_contacts; i++)
	{
		std::cout << std::setw(10) << i + 1 << " | ";
		std::string str = this->contacts[i].getFirstName();
		printInfo(str);
		std::cout << " | ";
		str = this->contacts[i].getLastName();
		printInfo(str);
		std::cout << " | ";
		str = this->contacts[i].getNickname();
		printInfo(str);
		std::cout << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
	}
}

bool	isNumber(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

void	PhoneBook::searchContact() const
{
	if (this->n_contacts == 0)
	{
		std::cout << "No contacts found" << std::endl;
		return ;
	}
	printList();
	std::string input;
	int	input_index = 0;
	while (input_index < 1 || input_index > this->n_contacts)
	{
		std::cout << "Enter the contact index to see more infos: ";
		if (std::getline(std::cin, input).fail())
			exit(EXIT_SUCCESS);
		if (isNumber(input))
			input_index = std::atoi(input.c_str());
		else
			input_index = 0;
		if (input_index < 1 || input_index > this->n_contacts)
			std::cout << "Please enter a valid index (1 to " << this->n_contacts << ")." << std::endl;
	}
	std::cout << "Contact: " << input_index << std::endl;
	std::cout << "First name: " << this->contacts[input_index - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[input_index - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[input_index - 1].getNickname() << std::endl;
	std::cout << "Phone number: " << this->contacts[input_index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[input_index - 1].getDarkestSecret() << std::endl;
}


