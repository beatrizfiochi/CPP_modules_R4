/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:53:42 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/25 19:07:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

/* --------------------Constructors-------------------- */

Bureaucrat::Bureaucrat(void) : _name("Not set"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

/* --------------------Operators-------------------- */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        if (this->_name != other._name)
            throw InvalidCopyAssignmentException();
        this->_grade = other._grade;
    }
    return (*this);
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return (out);
}

/* --------------------Destructor-------------------- */

Bureaucrat::~Bureaucrat(void) {}


/* --------------------Member Functions-------------------- */

const std::string Bureaucrat::getName(void) const
{
    return(this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}

void Bureaucrat::increment(void)
{
    if(this->_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::decrement(void)
{
    if(this->_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade += 1;
}

/* --------------------Exception Classes-------------------- */

char const* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

char const* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}

char const* Bureaucrat::InvalidCopyAssignmentException::what() const throw()
{
    return ("invalid copy assignment");
}
