// Fady Fahmy
// Csci 272 02(43123)
// SavingsAccount.h

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount {
private:
    double savingsBalance; // member variable to hold savings balance
    static double annualInterestRate; // static member variable to hold annual interest rate
public:
    SavingsAccount(double balance); // constructor to initialize savings balance
    void calculateMonthlyInterest(); // function to calculate monthly interest and update savings balance
    static void modifyInterestRate(double newRate); // static function to modify annual interest rate
    double getBalance() const; // function to get current savings balance
};

#endif
