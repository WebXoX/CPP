#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <time.h>

int Account::_nbAccounts =0;
int Account::_totalAmount =0;
int Account::_totalNbDeposits =0;
int Account::_totalNbWithdrawals=0;

Account::Account(int initial_deposit)
{
    Account::_nbAccounts +=  1;
    Account::_totalAmount +=  initial_deposit;
    Account::_accountIndex = Account::_nbAccounts-1;
    Account::_amount = initial_deposit;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;
    std::cout << "[" << time(NULL); 
    std::cout << "] index:" << Account::_accountIndex << ";amount:"<<Account::_amount ;
    std::cout <<";created" << std::endl;
}
Account::Account()
{
   
}
Account::~Account()
{
    std::cout << "[" << time(NULL); 
    std::cout << "] index:" << Account::_accountIndex << ";amount:"<<Account::_amount ;
    std::cout <<";closed" << std::endl;
}

int Account::Account::getNbAccounts()
{
    return(Account::_nbAccounts);
}

int Account::getTotalAmount()
{
    return(Account::_totalAmount);
}

int Account::getNbDeposits()
{
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return(Account::_totalNbWithdrawals);
}
void  Account::displayAccountsInfos(void)
{
   std::cout << "[" << time(NULL); 
   std::cout << "] accounts:" << Account::getNbAccounts() << ";total:"<<Account::getTotalAmount() <<";deposits:"<<Account::getNbDeposits()<<";withdrawals:"<<Account::getNbWithdrawals() << std::endl;
}

	void	Account::makeDeposit( int deposit )
    {
        Account::_nbDeposits += 1;
        Account::_totalNbDeposits += 1;
        std::cout << "[" << time(NULL); 
        std::cout << "] index:" << Account::_accountIndex << ";p_amount:"<<Account::_amount <<";deposit:"<<deposit<<";amount:"<<Account::_amount + deposit<<";nb_deposits:"<<Account::_nbDeposits << std::endl;
        Account::_amount += deposit;
        Account::_totalAmount += deposit;
    }
	bool	Account::makeWithdrawal( int withdrawal )
    {
        std::cout << "[" << time(NULL); 
        std::cout << "] index:" << Account::_accountIndex << ";p_amount:"<<Account::_amount ;
        if(withdrawal <= Account::_amount)
        {
            Account::_nbWithdrawals += 1;
            Account::_totalNbWithdrawals += 1;
            std::cout <<";withdrawal:"<<withdrawal<<";amount:"<<Account::_amount - withdrawal<<";nb_withdrawals:"<<Account::_nbWithdrawals << std::endl;
            Account::_amount -= withdrawal;
            Account::_totalAmount -= withdrawal;
            return(true);
        }
        else
            std::cout <<";withdrawal:refused" << std::endl;
        return(false);
    }
	int		Account::checkAmount( void )const
    {
        return(Account::_amount);
    }
	void	Account::displayStatus( void )const
    {   
        std::cout << "[" << time(NULL); 
        std::cout << "] index:" << Account::_accountIndex << ";amount:"<<Account::_amount <<";deposits:"<<Account::_nbDeposits<<";withdrawals:"<<Account::_nbWithdrawals << std::endl;
    }