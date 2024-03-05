#include <iostream>
using namespace std;
/*
void withdraw(double* balance, double amount) {
    if (amount > *balance) {
        cout << "You are broke. You don’t have enough money. Go away" << endl;
    }
    else {
        *balance -= amount;
    }

}

void deposit(double* balance, double amount) {
    *balance += amount;
}
void (*withr)(double* blnc, double amnt);
void (*depos)(double* blnc, double amnt);

int main() {

    // declare a pointer here to keep track of balance in the account and NAME it "balance"
    depos = &deposit;
    withr = &withdraw;
    double harry_account_balance = 0;

    //initialize the "balance" pointer such that it keeps track of harry_account_balance

    cout << "Harry's Balance at start is: " << harry_account_balance << endl; //print the balance here
    double amount = 1000.00; //setting the amount to be deposited

    // Make a deposit of the amount above by calling pointer to the appropriate function   
    depos(&harry_account_balance, amount);
    cout << "Balance in harry account is: " << harry_account_balance; //print the balance here
    cout << endl;
    amount = 500; //setting amount to 500
    // Withdraw the amount set above by calling pointer to the appropriate function 
    withr(&harry_account_balance, amount)
    cout << "Balance after withdrawing cash is: " << harry_account_balance; //print the balance here
    cout << endl;
    amount = 3000; //setting amount to 3000

    cout << "Withdrawing " << amount << " now" << endl;
    // Withdraw the amount set above by calling pointer to the appropriate function  
    withr(&harry_account_balance, amount);
}
*/
