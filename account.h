#ifndef ACCOUNT_H
#define	ACCOUNT_H

#include <iostream>
#include <stdexcept>

using namespace std;

class Exception_Negative_Deposit:public exception{
public:
    virtual const char* what() const throw(){
        return "Cannot Deposit Negative Amount!";
    }
};

class Exception_Overdraw:public exception {
public:
    virtual const char* what() const throw(){
        return "Account Balance Low!";
    }
};

class Exception_Negative_Withdraw:public exception{
public: 
    virtual const char* what() const throw(){
        return "Cannot Withdraw Negative Amount!";
    }
};
class Account {
private: 
    double balance;
   
public:
    Account();
    Account(double initialDeposit);
    double getBalance();
    double Deposit(double amount) throw(Exception_Negative_Deposit);
    double Withdraw(double amount) throw(Exception_Negative_Withdraw, Exception_Overdraw);
};
#endif
