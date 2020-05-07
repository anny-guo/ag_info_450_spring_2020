#include <iostream>

using namespace std;

int main(){
    int checking = 100;
    int saving = 100;
    int creditcard = 100;
    cout << "Checking balance: $" << checking << " ";
    cout << "Savings balance: $" << saving << " "; 
    cout << "Credit Card: $" << creditcard << endl; //this section prints out correctly

    int choice;
    do
    {
    cout << endl
    << " 1. Savings Deposit\n"
    << " 2. Savings Withdrawal\n"
    << " 3. Checking Deposit\n"
    << " 4. Write a Check\n"
    << " 5. Credit Card Payment\n"
    << " 6. Make a Charge\n"
    << " 7. Display Savings\n"
    << " 8. Display Checking\n"
    << " 9. Display Credit Card\n"
    << " 0. Exit"
    << " Enter your choice and press enter: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    double Account::makeDeposit(double amount); //saving deposit
    break;
    case 2:
    double Savings::doWithdraw(double amount); //saving withdrawl
    break;
    case 3:
    double Account::makeDeposit(double amount); //checking deposit
    break;
    case 4:
    void Checking::writeCheck(int checkNum, double amount); //write a check
    break;
    case 5:
    double CreditCard::makePayment(double amount); //credit card payment
    break;
    case 6:
    void CreditCard::doCharge(string name, double amount); //make a charge
    break;
    case 7:
    void Savings::display(); //display savings
    break;
    case 8:
    void Checking::display(); //display checking
    break;
    case 9:
    void CreditCard::display(); //display credit card
    break;
    case 0:
    cout << "End of Program.\n";
    break;
    default:
    cout << "Not a Valid Choice. \n"
    << "Choose again.\n";
    break;
    }

    }while (choice !=10);
    return default;
    }
};
