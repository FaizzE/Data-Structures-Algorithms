/*
   - it is a Speacial function that is invoked automatically at the tie of object creation.
   - Name of the constructor should be same as class Name.
   - it doesn't have any return type.
   - it  is used to initialize the value.
*/

#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:
    // default Constructor
    Customer()
    {
        name = "Faiz";
        account_number = 88;
        balance = 1000;
    }

    // Parameterized Constructor
    Customer(string name,int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Constructor Overloading
    Customer(string a, int b){
        name = a;
        account_number = b;
        // balance = z;
    }

    // Inline Constructor
    // inline Customer(string a, int b, int c):name(a),account_number(b),balance(c){
        
    // }

    void display(){
        cout<<name<<"\n "<<account_number<<"\n"<<balance<<"\n"<<"\n";
    }
};

int main() {

    Customer A1;
    Customer A2("Arhsad",57,200);
    Customer A3("Azog",18);
    A1.display();
    A2.display();
    A3.display();


    return 0;
}
