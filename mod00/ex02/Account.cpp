#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <sys/time.h>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << "\n";
}

void Account::makeDeposit(int deposit){
	Account::_totalAmount = Account::_totalAmount + deposit;
	Account::_nbDeposits =  Account::_nbDeposits + 1;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << Account::checkAmount() + deposit << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits << "\n";
	Account::_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	std::cout << "withdrawal:" ;
	if (Account::checkAmount() - withdrawal < 0)
	{
		std::cout << "refused\n";
		return (false);
	}
	Account::_totalAmount = Account::_totalAmount - withdrawal;
	Account::_totalNbWithdrawals += 1;
	Account::_nbWithdrawals = Account::_nbWithdrawals + 1;
	Account::_amount = Account::_amount - withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << Account::checkAmount()<< ";";
	std::cout << "nb_withdrawals:" << Account::_nbWithdrawals << "\n"; 
	return (false);
}

int	Account::checkAmount(void) const{
	return(Account::_amount);
}

void Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount()  << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals << "\n";
}

Account::Account(int initial_deposit){
	Account::_displayTimestamp();
	Account::_amount = initial_deposit;
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	Account::_nbAccounts = Account::_nbAccounts + 1;
	Account::_accountIndex = Account::_nbAccounts - 1;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created\n";
}

Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex ;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";closed\n";
}

Account::Account(void){

}

void Account::_displayTimestamp()
{
	unsigned long int sec= time(NULL);
  	std::cout << "[" << sec << "] ";
}
