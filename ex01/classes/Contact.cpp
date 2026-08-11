/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:33:59 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 22:33:59 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructor
Contact::Contact() {}
Contact::Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret) :
	first(first), last(last), nickname(nickname), number(number), secret(secret) {}

//destructor
Contact::~Contact() {}

//getters
std::string Contact::GetFirst() {
	return this->first;
}
std::string Contact::GetLast() {
	return this->last;
}
std::string Contact::GetNickname() {
	return this->nickname;
}
std::string Contact::GetNumber() {
	return this->number;
}
std::string Contact::GetSecret() {
	return this->secret;
}
