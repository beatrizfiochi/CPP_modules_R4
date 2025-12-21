/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:55:11 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 18:28:26 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN.";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "String memory address:     " << &string << std::endl;
	std::cout << "Pointered memory address:  " << stringPTR << std::endl;
	std::cout << "Referenced memory address: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value:     " << string << std::endl;
	std::cout << "Pointed value:    " << *stringPTR << std::endl;
	std::cout << "Referenced value: " << stringREF << std::endl;

	return 0;
}
