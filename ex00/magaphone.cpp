/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:57:06 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/04 13:51:22 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
		for (size_t j = 0; j < str.length(); ++j) {
			str[j] = std::toupper(str[j]);
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
