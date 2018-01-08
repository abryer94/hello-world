#include <iostream>
#include "Account.h"

using namespace std;

int main() {

        Account account1("Alex B", 10000);
        Account account2("Jason Bourne",200);

        cout << "account1" << account1.getName() << "balance is $"
                << account1.getBalance();
        cout << "\naccount2" << account2.getName() << "balance is $"
                << account2.getBalance();

        cout << "\n\nEnter deposit amount for account1: ";
        int depositAmount;
        cin >> depositAmount;
        cout << "adding " << depositAmount << " to account1 balance";
        account1.deposit(depositAmount);

        cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
        cout << "\n\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();

        cout << "\n\nEnter deposit amount for account2: ";
        cin >> depositAmount;
        cout << "adding " << depositAmount << " to account2 balance";
        account2.deposit(depositAmount);

        cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance() << endl;

}
