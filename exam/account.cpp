#include <iostream>
#include "account.h"

using namespace std;

double Account::makeDeposit(double amount){
    cout << "Enter amount to deposit: $";
    cin >> amount;
    balances += amount;
} //add the deposit amount to the balance

void Account::display(){
    Account acc;
    cout << "Name: " << accName;
    cout << "Tax ID: " << taxIDs;
    cout << "Current Balance: " << acc.balances << endl; //to differentiate for Account Balance on main
}


