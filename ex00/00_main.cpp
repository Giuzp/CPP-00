/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:42:03 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/04 11:45:00 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		string str = argv[i];
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str;
	}
	cout << '\n';
	return (0);
}
