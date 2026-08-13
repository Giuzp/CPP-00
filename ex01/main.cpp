/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:21:10 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/13 13:27:58 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	AddContact(PhoneBook *pb);
bool	CheckNumber(const std::string &str);

void	PrintContacts(PhoneBook pb) {
	for (int i = 0; i < 8; i++) {
		Contact guy = pb.GetContact(i);
		std::cout << "Contact " << i << std::endl;
		std::cout << guy.GetFirst() << " " << guy.GetLast() << " " << guy.GetNickname() << " ";
		std::cout << guy.GetNumber() << " " << guy.GetSecret() << std::endl << std::endl;
	}
}

int	main(void) {
	PhoneBook	phonebook = PhoneBook();
	std::string	cmd;

	while (true)
	{
		//get the input
		std::cout << "> "; getline(std::cin, cmd);
		//add new contact
		if (cmd == "ADD")
			AddContact(&phonebook);
		//search the phonebook
		if (cmd == "SEARCH")
			phonebook.Search();
		//leave the program
		if (cmd == "EXIT")
			break;

		//====== TO DELETE LATER ========
		if (cmd == "print")
			PrintContacts(phonebook);
	}
	return 0;
}

void	AddContact(PhoneBook *pb) {
	std::string infos[5] = {""};
	std::string texts[5] = {"Name", "Surname", "Nickname", "Number", "Secret"};

	for (int i = 0; i < 5; i++) {
		while (infos[i] == "") {
			std::cout << texts[i] << ": "; getline(std::cin, infos[i]);
			if (i == 3 && infos[i] != "")
				if (!CheckNumber(infos[i]))
					infos[i] = "";
		}
		
	}
	(*pb).NewContact(infos[0], infos[1], infos[2], infos[3], infos[4]);
}

bool	CheckNumber(const std::string &str) {
	if (str[0] != '+')
		return (str.find_first_not_of("0123456789") == std::string::npos);
	else
		return (str.find_first_not_of("0123456789", 1) == std::string::npos);
}