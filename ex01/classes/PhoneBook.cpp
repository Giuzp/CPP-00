/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 21:11:45 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 21:12:11 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//constructor
PhoneBook::PhoneBook() : ContactCount(0) {}

//destructor
PhoneBook::~PhoneBook() {}

//methodes
void	PhoneBook::NewContact(std::string first, std::string last, std::string nickname,
		std::string number, std::string secret) {
	if (ContactCount == 8)
		ContactCount = 0;
	this->contact[ContactCount] = Contact(first, last, nickname, number, secret);
	ContactCount++;
}