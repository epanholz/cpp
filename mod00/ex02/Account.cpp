#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 8;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	Account account;
	std::cout << "index:" << "0" << ";amount:" << account._nbDeposits << ";created\n";	
}

void Account::makeDeposit(int deposit){
	Account::_nbDeposits = deposit;
	//std::cout << "Make Deposit\n";	
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_nbWithdrawals = withdrawal;
	// std::cout << "Make Withdrawal\n";
	if (withdrawal > 0)
		return (true);
	return (false);
}

void Account::displayStatus(void) const{
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount()  << ";\n";
	// std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	// std::cout << "withdrawals:" << Account::_totalNbWithdrawals << ";\n";
}

Account::Account( int initial_deposit ){
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	//std::cout << "index:" << Account::_accountIndex << ";amount:" << initial_deposit << ";created\n";
}

Account::~Account( void ){
	//std::cout << "Account void\n";
}

Account::Account(void){
	//std::cout << "Account void2\n";
}

void
