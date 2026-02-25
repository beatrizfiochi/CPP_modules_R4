/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:08:33 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/25 19:51:11 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n----------Valid bureaucrats----------" << std::endl;
    try
    {
        Bureaucrat a("Agatha", 75);
        std::cout << a;
        std::cout << "After grade increment:" << std::endl;
        a.increment();
        std::cout << a;
        std::cout << "After grade decrement:" << std::endl;
        a.decrement();
        std::cout << a;

        std::cout << "---Copy constructor---" << std::endl;
        Bureaucrat a2(a);
        std::cout << a2;
        std::cout << "After grade increment of deep copy:" << std::endl;
        a2.increment();
        std::cout << a2;
        std::cout << "Original:" << std::endl;
        std::cout << a;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "\n----------Invalid bureaucrat (grade too high)----------" << std::endl;
    try
    {
        Bureaucrat b("Benedita", 0);
        std::cout << b;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "\n----------Invalid bureaucrat (grade too low)----------" << std::endl;
    try
    {
        Bureaucrat c("Camila", 151);
        std::cout << c;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }


    std::cout << "\n----------Copy assignment tests----------" << std::endl;
	std::cout << "---Bureaucrats have same name---" << std::endl;
	try
	{
		Bureaucrat	d("Dani", 50);
		Bureaucrat	e("Dani", 100);
		std::cout << "-Before assignment:\n" << d << e;

		d = e;
		std::cout << "-After assignment:\n" << d << e;
	}
	catch (std::exception const& error)
	{
		std::cout << "Exception: " << error.what() <<std::endl;
	}

	std::cout << "---Bureaucrats have different names---" << std::endl;
	try
	{
		Bureaucrat	f("Fabiana", 120);
		Bureaucrat	g("Goreti", 30);
		std::cout << "-Before assignment:\n" << f << g;

		f = g;
		std::cout << "-After assignment:\n" << f << g;
	}
	catch (std::exception const& error)
	{
		std::cout << "Exception: " << error.what() << std::endl;
	}

	std::cout << "----------Increment overflow----------" << std::endl;
	try
	{
		Bureaucrat	h("Heloisa", 1);
		std::cout << "-Before increment:\n" << h;
		h.increment();
		std::cout << "After increment:\n" << h;
	}
	catch (std::exception const& error)
	{
		std::cout << "Exception: " << error.what() << std::endl;
	}

	std::cout << "----------Decrement overflow----------" << std::endl;
	try
	{
		Bureaucrat	i("Ivana", 150);
		std::cout << "-Before decrement:\n" << i;
		i.decrement();
		std::cout << "After decrement:\n" << i;
	}
	catch (std::exception const& error)
	{
		std::cout << "Exception: " << error.what() << std::endl;
	}

    return (0);
}
