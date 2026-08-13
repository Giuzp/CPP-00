/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:09:24 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/13 14:09:24 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	FormattedPrint(std::string text);
bool	IsOnlyDigits(const std::string &str);

//constructor
PhoneBook::PhoneBook() : ContactCount(0), NbOfContacts(0) {}

//destructor
PhoneBook::~PhoneBook() {}

//methodes
// Add a new contact to the phonebook
void	PhoneBook::NewContact(std::string first, std::string last, std::string nickname,
		std::string number, std::string secret) {
	if (ContactCount == 8)
		ContactCount = 0;
	this->contact[ContactCount] = Contact(first, last, nickname, number, secret);
	ContactCount++;
	if (this->NbOfContacts < 8)
		this->NbOfContacts++;
}

// Search the phonebook
void	PhoneBook::Search()
{
	//Print the existing contacts
	for (int i = 0; i < this->NbOfContacts; i++) {
		std::cout << '|' << std::setfill(' ') << std::setw(10) << i << '|';
		std::string	save = this->contact[i].GetFirst();
		FormattedPrint(save);
		save = this->contact[i].GetLast();
		FormattedPrint(save);
		save = this->contact[i].GetNickname();
		FormattedPrint(save);
		std::cout << std::endl;
	}
	//ask index of the contact to display
	std::string	input;
	int index;
	while (true) {
		std::cout << "Choose index > ";
		if (!getline(std::cin, input)) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
		}
		//display contact or error message for out-of-scope index
		if (!IsOnlyDigits(input))
			std::cout << "Index can only be numerical" << std::endl;
		else {
			std::stringstream ss(input);
			ss >> index;
			if (index >= this->NbOfContacts)
				std::cout << "Index out-of-range" << std::endl;
			else
				break;
		}
	}
	//Display chosen contact
	std::cout << this->contact[index].GetFirst() << std::endl;
	std::cout << this->contact[index].GetLast() << std::endl;
	std::cout << this->contact[index].GetNickname() << std::endl;
	std::cout << this->contact[index].GetNumber() << std::endl;
	std::cout << this->contact[index].GetSecret() << std::endl;
}

void	FormattedPrint(std::string text) {
	if (text.length() >= 10)
		std::cout << text.substr(0, 9) << ".|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << text << '|';
}

bool	IsOnlyDigits(const std::string &str) {
	return (!str.empty() && str.find_first_not_of("0123456789") == std::string::npos);
}
