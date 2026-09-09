#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountnumber;
    string name;
    double balance;
    static int total_number;

public:

    BankAccount() {
        accountnumber = 0;
        balance = 0;
        name = "none";
        total_number++;
    }

    BankAccount(int cn, string n, double b) {
        accountnumber = cn;
        name = n;
        balance = b;
        total_number++;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "deposit = " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        }
        else if (amount > 0) {
            balance -= amount;
            cout << "withdraw = " << amount << endl;
        }
    }

    void display() {
        cout << "account number = " << accountnumber << endl;
        cout << "name = " << name << endl;
        cout << "balance = " << balance << endl;
    }
};

int BankAccount::total_number = 0;

int main() {

    BankAccount a1;
    BankAccount a2;
    BankAccount a3;

    a1.display();

    return 0;
}