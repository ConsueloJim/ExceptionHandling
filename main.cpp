#include <cstdlib>
#include "account.h"
#include <iostream>
#include <stdexcept>


using namespace std;

int main(int argc, char** argv) 
{  
    double deposit; 
    Account account1;
   while(1) {
       
       int option; 
       cout << " What would you like to do? " << endl;
       cout << " 1: View Account Balance" << endl;
       cout << " 2: Make a Deposit" << endl;
       cout << " 3: Withdraw Money" << endl;
       cout << " 4: Logout" << endl;
       cin >> option;
       
       switch(option){
       
        case 1: cout << "Balance: " << account1.getBalance() << endl;
            break;
            
        case 2: cout << "Enter amount to deposit: ";
            cin >> deposit;
           
            try { 
                account1.Deposit(deposit);
            } catch(Exception_Negative_Deposit & neg_deposit) {
                cout << "Exception caught -- " << neg_deposit.what() << endl;
            }
            break;
        
        double withdrawAmount;   
        case 3: cout << "Enter an amount to withdraw: ";
            cin >> withdrawAmount; 
           
            try {
                account1.Withdraw(withdrawAmount);
            } catch(Exception_Overdraw & low_balance) {
                 cout << "Exception caught: " << low_balance.what() << endl << endl;
            } catch(Exception_Negative_Withdraw & neg_withdraw) {
                 cout << "Exception caught: " << neg_withdraw.what() << endl << endl;
            }
            break;
            
        case 4: exit(0); 
            break;
        default: cout << "You must enter a valid option" << endl;
        } 
    } 
   return 0;
  
}




