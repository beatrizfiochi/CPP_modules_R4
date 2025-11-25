/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:54:40 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 17:27:24 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

//Constructor
Contact::Contact()
{
}

//Destructor
Contact::~Contact()
{
}

void	Contact::setFirstName(const std::string &firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
