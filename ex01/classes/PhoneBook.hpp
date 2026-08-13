/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:33:15 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/13 11:33:15 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];		//list of contacts
		int		ContactCount;	//index for contacts
		int		NbOfContacts;	//Number of contacts in the phonebook
	
	public:
		PhoneBook();
		Contact	GetContact(int index);
		void	NewContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
		void	Search();
		~PhoneBook();
};

#endif
