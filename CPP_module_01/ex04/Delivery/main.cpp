/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:10:59 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 14:04:03 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int replace (const std::string &filename,
	const std::string &s1, const std::string &s2)
{
	//ifstream is used to read from files.
	//c_str() convertes an object std::string in C-string
	// (a pointer to an char array ended with \0).
	//std::ios::binary opens files in binary mode,
	//	preventing any automatic character translations
	//	and precise control over text files across different operating systems.
	std::ifstream inputFile(filename.c_str(), std::ios::binary);
	if (!inputFile.is_open())
	{
		std::cout << "Error: could not open " << filename << std::endl;
		return -1;
	}

	//ofstream is used to write into files.
	std::ofstream outputFile(std::string(filename + ".replace").c_str(), std::ios::binary);
	if (!outputFile.is_open())
	{
		std::cout << "Error: could not open " << filename << ".replace" << std::endl;
		return -1;
	}

	std::string line;

	//getline(destination, size, delimiter) writes up to size characters to the
	//	destination with data read from the file and the line break or delimiter is discarded
	//	and the file pointer is moved to the character that follows it.
	while (std::getline(inputFile, line))
	{
		std::string::size_type pos = 0;
		//string::npos indicates the highest possible value for an element of type size_t (length)
		//string::find() returns the integer representing the index of the first occurrence of the sub-string,
		//	if the sub-string is not found, it returns string::npos.
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
		}
		outputFile << line << std::endl;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: empty arguments" << std::endl;
		return 1;
	}
	if (s1 == s2)
	{
		std::cout << "Error: s1 and s2 are the same" << std::endl;
		return 1;
	}
	return replace(filename, s1, s2);
}
