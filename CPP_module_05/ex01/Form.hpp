/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:06:52 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/26 11:51:09 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;
    public:
        Form(void);
        Form(std::string name, int signGrade, int executeGrade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form(void);

        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExecuteGrade(void) const;
        void beSigned(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class InvalidCopyAssignmentException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class FormAlreadySignException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator << (std::ostream &out, const Form &form);

#endif
