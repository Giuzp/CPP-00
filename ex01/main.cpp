/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:34:38 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 22:34:38 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	AddContact(PhoneBook *pb);

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
		if (cmd == "print")
			PrintContacts(phonebook);
		if (cmd == "ADD")
			AddContact(&phonebook);
		//leave the program
		if (cmd == "EXIT")
			break;
	}
	return 0;
}

void	AddContact(PhoneBook *pb) {
	std::string infos[5] = {""};
	std::string texts[5] = {"Name", "Surname", "Nickname", "Number", "Secret"};

	for (int i = 0; i < 5; i++) {
		std::cout << texts[i] << ": "; getline(std::cin, infos[i]);
	}
	(*pb).NewContact(infos[0], infos[1], infos[2], infos[3], infos[4]);
}
