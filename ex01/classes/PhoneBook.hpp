/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:26:20 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/11 14:26:20 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "../main.hpp"

class PhoneBook {
	private:
		Contact contact[8];
		int		ContactCount;
	
	public:
		PhoneBook();
		void	NewContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
		~PhoneBook() = default;
};

#endif
