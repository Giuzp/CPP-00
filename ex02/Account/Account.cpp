/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcresce <dcresce@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:24:42 by dcresce           #+#    #+#             */
/*   Updated: 2026/09/27 15:55:53 by dcresce          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <string>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//contructor
Account::Account(int initial_deposit) : _amount(initial_deposit) {
	//enter account starting data
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	//update global infos
	_nbAccounts++;
	_totalAmount += this->_amount;
	//print the timestamp
	Account::_displayTimestamp();
	//print the creation
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

//destructor
Account::~Account() {
	//print the timestamp
	Account::_displayTimestamp();
	//print the creation
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

//timestamp helper
void	Account::_displayTimestamp(void) {
	//get timestamp
	time_t		timestamp = time(NULL);
	struct tm	datetime  = *localtime(&timestamp);
	//string to format the timestamp
	char	output[18];
	
	//format the output
	strftime(output, 18, "[%Y%m%d_%H%M%S]", &datetime);
	//display timestamp
	std::cout << output << " ";
}

//account actions
// new deposits
void	Account::makeDeposit(int deposit) {
	//save previous amount
	int	p_amount = this->_amount;
	//update account infos
	this->_amount += deposit;
	this->_nbDeposits++;
	//update global infos
	_totalAmount += deposit;
	_totalNbDeposits++;
	//print the timestamp
	Account::_displayTimestamp();
	//print log message
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

// new withdrawal
bool	Account::makeWithdrawal(int withdrawal) {
	if (this->_amount >= withdrawal) {
		//save previous amount
		int	p_amount = this->_amount;
		//update account infos
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		//update global infos
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		//print the timestamp
		Account::_displayTimestamp();
		//print log message
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return 1;
	}
	else {
		//print the timestamp
		Account::_displayTimestamp();
		//print log message
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return 0;
	}
}

int		Account::checkAmount(void) const {
	return this->_amount;
}

//Display infos
// Display this account status
void	Account::displayStatus(void) const {
	//print the timestamp
	Account::_displayTimestamp();
	//print account status
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Display accounts infos
void	Account::displayAccountsInfos(void) {
	//print the timestamp
	Account::_displayTimestamp();
	//print accounts infos
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

//static getters
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

