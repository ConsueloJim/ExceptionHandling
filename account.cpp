#include <string>
#include <iostream>
#include "account.h"
#include <stdexcept>

using namespace std;


    Account::Account():balance(0){}
    
    Account::Account(double initialDeposit) {
        balance = initialDeposit;
    }
    double Account::getBalance(){
        return balance;
    }
    
double Account::Deposit(double amount) throw(Exception_Negative_Deposit){
  
    Exception_Negative_Deposit neg_deposit;
    
    if(amount > 0)
        balance += amount;
    else 
        throw neg_deposit; 
    return balance;
}

double Account::Withdraw(double amount) throw(Exception_Overdraw, Exception_Negative_Withdraw){
   
    Exception_Overdraw low_balance;
    Exception_Negative_Withdraw neg_withdraw; 
    
    if(amount > balance)
        throw low_balance; 
    
    else if(amount < 0) 
        throw neg_withdraw;
    
    else 
        balance -= amount;
    return balance;   
  }
