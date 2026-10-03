#include <iostream>
using namespace std;

class Account {
    double balance;                     // hidden
public:
    Account() : balance(0) {}
    void deposit(double amt) { 
        if (amt > 0) balance += amt; }
    double getBalance() const {
         return balance; }
};

class SavingsAccount : public Account {
public:
    void addInterest(double rate) {
        deposit(getBalance() * rate / 100);   // uses base's public functions only
    }
};

int main() {
    SavingsAccount s;
    s.deposit(1000);
    s.addInterest(5);
    cout << s.getBalance();             // 1050
}