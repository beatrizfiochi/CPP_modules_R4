/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:35:17 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 17:37:55 by bfiochi-         ###   ########.fr       */
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
		const	std::string &getFirstName() const;
		const	std::string &getLastName() const;
		const	std::string &getNickname() const;
		const	std::string &getPhoneNumber() const;
		const	std::string &getDarkestSecret() const;
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
