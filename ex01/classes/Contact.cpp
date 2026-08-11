/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:46:38 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 11:47:31 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructor
Contact::Contact(std::string first, std::string last, std::string number, std::string secret) :
	first(first), last(last), number(number), secret(secret) {}

//getters
std::string Contact::GetFirst() {
	return this->first;
}
std::string Contact::GetLast() {
	return this->last;
}
std::string Contact::GetNumber() {
	return this->number;
}
std::string Contact::GetSecret() {
	return this->secret;
}
