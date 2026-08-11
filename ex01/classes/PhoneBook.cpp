/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:26:26 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 14:26:26 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//constructor
PhoneBook::PhoneBook() : ContactCount(0) {}

//methodes
void	PhoneBook::NewContact(std::string first, std::string last, std::string nickname,
		std::string number, std::string secret) {
	if (ContactCount == 8)
		ContactCount = 0;
	this->contact[ContactCount] = Contact(first, last, nickname, number, secret);
	ContactCount++;
}