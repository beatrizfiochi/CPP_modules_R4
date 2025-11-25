/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:35:28 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/25 16:11:38 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		bool	addInfo(std::string &info, std::string infoName, bool isPhoneNum);
		bool	checkInput(std::string &str, bool isPhoneNum);
	private:
		int	index;
		int	n_contacts;
		Contact contacts[8];
};

#endif
