#include <iostream>
#include "account.h"
#include "savings.h"

using namespace std;

double Savings::doWithdraw(double amount){
    cout << "Enter amount to withdraw: $" << endl;
    cin >> amount;
    balances -= amount;
}

void Savings::display(){
    Savings sav;
    cout << "Name: " << accName;
    cout << "Tax ID: " << taxIDs;
    cout << "Saving Balance: " << sav.balances << endl; // to differentiate for Saving Balance on main
}
