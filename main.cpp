// Fady Fahmy
// Csci 272 02(43123)
// main.cpp

#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int main() {
    SavingsAccount saver1(2000.0); // create SavingsAccount object with initial savings balance of $2000
    SavingsAccount saver2(3000.0); // create SavingsAccount object with initial savings balance of $3000

    cout << "Initial balances:" << endl;
    cout << "Saver 1: $" << saver1.getBalance() << endl;
    cout << "Saver 2: $" << saver2.getBalance() << endl << endl;

    SavingsAccount::modifyInterestRate(0.03); // set annual interest rate to 3%
    saver1.calculateMonthlyInterest(); // calculate monthly interest and update saver1's savings balance
    saver2.calculateMonthlyInterest(); // calculate monthly interest and update saver2's savings balance

    cout << "Balances after 1 month's interest applied at .03:" << endl;
    cout << "Saver 1: $" << saver1.getBalance();
}
