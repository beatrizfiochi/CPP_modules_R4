/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:35:17 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 17:27:19 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact{
	public:
		Contact();
		~Contact();
		void	setFirstName(const std::string &firstName);
		void	setLastName(const std::string &lastName);
		void	setNickname(const std::string &nickname);
		void	setPhoneNumber(const std::string &phoneNumber);
		void	setDarkestSecret(const std::string &darkestSecret);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
