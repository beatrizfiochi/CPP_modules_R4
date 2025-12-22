/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:16:57 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 15:14:14 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./filter <LEVEL>" << std::endl;
		return 1;
	}
	std::string level = argv[1];
	if (level.empty())
	{
		std::cout << "Error: empty argument" << std::endl;
		return 1;
	}

	Harl harl;
	harl.complain(level);
	return 0;
}
