/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:21:56 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/11/28 12:42:00 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

// Initializing static variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor
// with initializer list (non static variables)
// syntax: constructor : variable(value of inicialization)
Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}

int Account::checkAmount(void) const
{
	return (_amount);
}

// Displays a timestamp: format [YYYYMMDD_HHMMSS]
void Account::_displayTimestamp(void)
{
	time_t		timestamp = time(NULL);
	struct tm	datetime = *localtime(&timestamp);
	char		output[16];

	strftime(output, 16, "%Y%m%d_%H%M%S", &datetime);
	std::cout << "[" << output << "] ";
}

int main(void)
{
    Account a(1000);
    Account b(500);
    Account c(42);
	return (0);
}
