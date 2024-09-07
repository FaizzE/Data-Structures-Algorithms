/*
    - It is an instance member fubction that is invoke automatically whenever an object is 
      going to be destroyed.
    - It is a last function that going to be called before an object is destroyed. 
*/
#include<bits/stdc++.h>
using namespace std;

class Customer 
{
    string name;
    int *data;

    public:
    Customer()
    {
        name = "4";
        cout<<"constructor is -> "<<name<<endl;
    }

    Customer(string name)
    {
        // name = "Faiz";
        // data = new int;
        // *data = 10;
        // cout<<"constructor is called\n";
        this->name = name;
        cout<<"constructor is -> "<<name<<endl;
    }
    // Destructor
    ~Customer()
    {
        // delete data;
        // cout<<"Destructor is called\n";
        cout<<"Destructor is -> "<<name<<endl;
    }
    
};

int main() {

    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 = new Customer;
    delete A4;

    return 0;
}