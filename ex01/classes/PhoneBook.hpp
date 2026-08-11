/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 21:24:45 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 21:24:58 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
	private:
		Contact contact[8];		//list of contacts
		int		ContactCount;	//index for contacts
	
	public:
		PhoneBook();
		void	NewContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
		~PhoneBook();
};

#endif
