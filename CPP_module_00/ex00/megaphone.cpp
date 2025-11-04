/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:39:55 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/04 12:04:19 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j] != '\0'; ++j)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
