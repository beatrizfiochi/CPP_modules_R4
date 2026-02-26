/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:08 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/26 12:18:30 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

/* --------------------Constructors-------------------- */

Form::Form(void) : _name("Not set"), _isSigned(false), _signGrade(150), _executeGrade(150) {}

Form::Form(std::string name, int signGrade, int executeGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

/* --------------------Operators-------------------- */

Form& Form::operator=(const Form& other)
{
    if(this != &other)
    {
        if (this->_name != other._name || this->_signGrade != other._signGrade || this->_executeGrade != other._executeGrade)
            throw InvalidCopyAssignmentException();
        this->_isSigned = other._isSigned;
    }
    return (*this);
}

std::ostream &operator << (std::ostream &out, const Form &form)
{
    out << "From " << form.getName() << " was created with: \n"
        << "Grade to sign: " << form.getSignGrade() << "\n"
        << "Grade to execute: " << form.getExecuteGrade() << "\n"
        << "This form is signed: " << (form.getIsSigned() ? "true" : "false") << "\n";
    return (out);
}

/* --------------------Destructor-------------------- */

Form::~Form(void) {}

/* --------------------Member Functions-------------------- */

const std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

int Form::getSignGrade(void) const
{
    return (this->_signGrade);
}

int Form::getExecuteGrade(void) const
{
    return (this->_executeGrade);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->_isSigned)
            throw FormAlreadySignException();
    if (bureaucrat.getGrade() <= this->_signGrade)
        this->_isSigned = true;
    else
        throw GradeTooLowException();
}

/* --------------------Exception Classes-------------------- */

char const* Form::GradeTooHighException :: what() const throw()
{
    return ("grade is too high");
}

char const* Form::GradeTooLowException :: what() const throw()
{
    return ("grade is too low");
}

char const* Form::InvalidCopyAssignmentException :: what() const throw()
{
    return ("invalid copy assignment");
}

char const* Form::FormAlreadySignException :: what() const throw()
{
    return ("form is already sign");
}
