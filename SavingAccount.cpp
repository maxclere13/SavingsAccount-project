// Fady Fahmy
// SavingsAccount.cpp

#include "SavingsAccount.h"
#include <iostream>

using namespace std;

// initialize static member variable
double SavingsAccount::annualInterestRate = 0.0;

// constructor to initialize savings balance
SavingsAccount::SavingsAccount(double balance) {
    savingsBalance = balance;
}

// function to calculate monthly interest and update savings balance
void SavingsAccount::calculateMonthlyInterest() {
    double interest = savingsBalance * annualInterestRate / 12.0; // calculate interest
    savingsBalance += interest; // add interest to savings balance
}

// static function to modify annual interest rate
void SavingsAccount::modifyInterestRate(double newRate) {
    annualInterestRate = newRate;
}

// function to get current savings balance
double SavingsAccount::getBalance() const {
    return savingsBalance;
}
