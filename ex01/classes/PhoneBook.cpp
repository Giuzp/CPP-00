/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 22:10:38 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/12 22:22:37 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	FormattedPrint(std::string text);
bool	IsOnlyDigits(const std::string &str);
//constructor
PhoneBook::PhoneBook() : ContactCount(0) {}

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
}

// Search the phonebook
void	PhoneBook::Search()
{
	//Print the existing contacts
	for (int i = 0; i < this->ContactCount; i++) {
		std::cout << i << '|';
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
	while (true) {
		std::cout << "Choose index > "; getline(std::cin, input);
		if (!IsOnlyDigits(input))
			std::cout << "Index can only be numerical" << std::endl;
		else if (std::stoi(input) >= this->ContactCount)
			std::cout << "Index out-of-range" << std::endl;
		else
			break;
	}
	//display contact or error message for out-of-scope index
	int index = std::stoi(input);
	
	//================ Add contact display ===================

}

void	FormattedPrint(std::string text) {
	if (text.length() >= 10)
		std::cout << text.substr(0, 9) << ".|";
	else
		std::cout << text << std::setfill(' ') << std::setw(11 - text.length()) << '|';
}

bool	IsOnlyDigits(const std::string &str) {
	return (!str.empty() && str.find_first_not_of("0123456789") == std::string::npos);
}

//====== TO DELETE LATER ========
Contact	PhoneBook::GetContact(int index) {
	return this->contact[index];
}
