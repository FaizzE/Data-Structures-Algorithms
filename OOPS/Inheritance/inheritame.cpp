#include<bits/stdc++.h>
using namespace std;

class Human
{
    public:
    string name;
    int age, weight;
};

class Student: public Human
{
    private:
    int roll_number, fees;

    public:

    void fun(string n, int a, int w){
        name = n;
        age = a;
        weight = w;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<": ";
    }
};

int main() {

    Student A;
    A.fun("faiz",10,50);
    A.display();

    return 0;
}
