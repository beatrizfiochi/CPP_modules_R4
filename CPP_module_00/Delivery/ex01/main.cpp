/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:52:12 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 14:07:46 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int	main()
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (std::getline(std::cin, command).fail())
			exit(EXIT_SUCCESS);
		if (command == "ADD")
		{
			phonebook.addContact();
			std::cout << "Contact added" << std::endl;
		}
		else if (command.empty())
			continue;
		else
			std::cout << "Invalid command" << std::endl;
	}

	return (0);
}
