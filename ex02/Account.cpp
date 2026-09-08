/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:55:39 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/03 14:14:34 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//contructor
Account::Account(int initial_deposit) : _amount(initial_deposit) {}

//destructor
Account::~Account() {}

//getters
int	Account::getNbAccounts() {
	return _nbAccounts;
}
int	Account::getTotalAmount() {
	return _totalAmount;
}
int	Account::getNbDeposits() {
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

