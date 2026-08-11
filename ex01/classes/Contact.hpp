/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 21:24:01 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 22:22:48 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	private:
		std::string first;		//contact first name
		std::string last;		//contact last name
		std::string	nickname;	//contact nickname
		std::string number;		//contact phone number
		std::string secret;		//contact darkest secret
	
	public:
		Contact();
		Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
		std::string GetFirst();
		std::string GetLast();
		std::string GetNickname();
		std::string GetNumber();
		std::string GetSecret();
		~Contact();
};

#endif
