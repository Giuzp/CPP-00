/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:21:19 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 11:36:04 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Contact {
	private:
		std::string first;		//contact first name
		std::string last;		//contact last name
		std::string number;		//contact phone number
		std::string secret;		//contact darkest secret
	
	public:
		//constructor
		Contact(std::string first, std::string last, std::string number, std::string secret) :
			first(first), last(last), number(number), secret(secret) {}
		//getters
		std::string GetFirst() {
			return this->first;
		}
		std::string GetLast() {
			return this->last;
		}
		std::string GetNumber() {
			return this->number;
		}
		std::string GetSecret() {
			return this->secret;
		}
};
