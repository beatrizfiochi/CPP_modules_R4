/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:08:33 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/26 13:02:37 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n----------Valid bureaucrats and forms----------" << std::endl;
    try
    {
        Bureaucrat a("Agatha", 75);
        std::cout << a;
        Form z("Z", 74, 100);
        std::cout << z;

        a.signForm(z);

        std::cout << "After grade increment of Bureaucrat:" << std::endl;
        a.increment();
        std::cout << a;
        a.signForm(z);

        std::cout << "After grade decrement:" << std::endl;
        a.decrement();
        a.signForm(z);
        std::cout << a;
        std::cout << z;

        std::cout << "---Copy constructor of form---" << std::endl;
        Form z2(z);
        std::cout << z2;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "\n----------Invalid form (grade too high)----------" << std::endl;
    try
    {
        Form y("Y", 0, 100);
        std::cout << y;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "\n----------Invalid form (grade too low)----------" << std::endl;
    try
    {
        Form x("X", 151, 100);
        std::cout << x;
    }
    catch(const std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "\n----------Copy assignment tests----------" << std::endl;
    std::cout << "---Forms have same name, signGrade and executeGrade---" << std::endl;
    try
    {
        Bureaucrat b("Bia", 50);
        Form w("W", 50, 100);
        Form v("W", 50, 100);
        b.signForm(v);
        std::cout << "-Before assignment:\n" << w << v;

        w = v;
        std::cout << "-After assignment:\n" << w << v;
    }
    catch (std::exception const& error)
    {
        std::cout << "Exception: " << error.what() <<std::endl;
    }

    std::cout << "---Forms have different names, same signGrade and executeGrade---" << std::endl;
    try
    {
        Bureaucrat c("Carol", 50);
        Form u("U", 50, 100);
        Form t("T", 50, 100);
        c.signForm(t);
        std::cout << "-Before assignment:\n" << u << t;

        u = t;
        std::cout << "-After assignment:\n" << u << t;
    }
    catch (std::exception const& error)
    {
        std::cout << "Exception: " << error.what() << std::endl;
    }

    std::cout << "---Forms have different names and signGrades, same executeGrade---" << std::endl;
    try
    {
        Bureaucrat d("Dani", 40);
        Form r("R", 50, 100);
        Form s("S", 60, 100);
        d.signForm(s);
        std::cout << "-Before assignment:\n" << r << s;

        r = s;
        std::cout << "-After assignment:\n" << r << s;
    }
    catch (std::exception const& error)
    {
        std::cout << "Exception: " << error.what() << std::endl;
    }

    std::cout << "---Forms have different names, signGrades and executeGrade---" << std::endl;
    try
    {
        Bureaucrat e("Ella", 40);
        Form p("P", 50, 100);
        Form q("Q", 60, 150);
        e.signForm(q);
        std::cout << "-Before assignment:\n" << p << q;

        p = q;
        std::cout << "-After assignment:\n" << p << q;
    }
    catch (std::exception const& error)
    {
        std::cout << "Exception: " << error.what() << std::endl;
    }

    std::cout << "----------Signed form----------" << std::endl;
    try
    {
        Bureaucrat h("Heloisa", 1);
        std::cout << h;
        Form o("O", 1, 100);
        std::cout << o;
        h.signForm(o);
        std::cout << o;

        Bureaucrat i("Ilda", 1);
        std::cout << i;
        i.signForm(o);
    }
    catch (std::exception const& error)
    {
        std::cout << "Exception: " << error.what() << std::endl;
    }

    return (0);
}
