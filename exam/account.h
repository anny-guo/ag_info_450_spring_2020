#include <iostream>
#include <string>

using namespace std;

class Account 
{
    private:
        string accName;
        long int taxIDs;
        double balances;

    public:
        Account();
        void setName(string name){
            accName = name;
            }
        string getName(){
            return accName;
            }
        void setTaxID(long int taxID){
            taxIDs = taxID;
            }
        int getTaxID(){
            return taxIDs;
            }
        void setBalance(double balance){
            balances = balance;
            }
        double getBalance(){
            return balances;
            }
        void makeDeposit(double amount);

    protected:
        int numDeposits;
        int numWithdraws;
};
