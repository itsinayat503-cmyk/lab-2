#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int AccountNumber;
    string AccountName;
    double Balance;
public:
    void setAccountNumber(int accNum) {
        AccountNumber = accNum;
    }
    void setName(string n) {
        Name = n;
    }
    void setBalance(double b) {
        Balance = b;
    }
    int getAccountNumber() {
        return AccountNumber;
    }
    string getName() {
        return Name;
    }
    double getBalance() {
        return Balance;
    }
};

int main() {
    BankAccount bankAccount;
    bankAccount.setAccountNumber(123456);
    bankAccount.setName("Ali");
    bankAccount.setBalance(50000);

    cout << bankAccount.getAccountNumber() << endl;
    cout << bankAccount.getName() << endl;
    cout << bankAccount.getBalance() << endl;
}
