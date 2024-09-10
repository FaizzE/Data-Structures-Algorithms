/*
    - Wrapping up of data and Information in a Single unit, While Controlling access to them.
*/

#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number,balance;
    public:

    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount) {
        if(amount>0)
        {
            balance += amount;
        }
    }

    void withdraw(int amount) {
        if(amount<=balance&&amount>0) {
            balance -= amount;
        }
    }

    void display() {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

};

int main() {

    Customer A1("Rohit", 1, 1000);
    Customer A2("Mohit", 2, 1800);
    Customer A3("Mohan", 3, 2000);
    A1.deposit(-10);
    A1.display();



    return 0;
}
