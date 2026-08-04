/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:57:06 by dcresce           #+#    #+#             */
/*   Updated: 2026/08/04 11:57:11 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

# include <algorithm>
# include <string>
# include <iostream>

using namespace std;

int	main(int argc, char **argv) {
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		string str = argv[i];
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str;
	}
	cout << '\n';
	return (0);
}
