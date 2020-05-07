#include <iostream>
#include "creditcard.h"
#include "account.h"

using namespace std;

CreditCard cc;

void CreditCard::doCharge(string name, double amount){
    for (int x = 0; x < 10; x++){
        double balances += last10checks[x];
        cout << x << endl;
    }
}

double CreditCard::makePayment(double amount){
    double balances -= amount
    cout << "Payment: $" << amount << endl;
}

void CreditCard::display(){
    cout << "Name: " << accName;
    cout << "Tax ID: " << taxIDs;
    cout << "Credit Card Balance: " << cc.balances << endl; // to differentiate for Credit Card Balance on main
}
