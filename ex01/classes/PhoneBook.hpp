/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:56:01 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/13 13:56:01 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>
# include <cstdio>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];		//list of contacts
		int		ContactCount;	//index for contacts
		int		NbOfContacts;	//Number of contacts in the phonebook
	
	public:
		PhoneBook();
		void	NewContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
		void	Search();
		~PhoneBook();
};

#endif
