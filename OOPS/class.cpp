#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private:
    string name;
    int age,roll_no;
    string grade;

    /* Function Getter and Setter */
    public:

    // Setter function
    void setname(string s){
        if(s.size()==0){
            cout<<"Invalid Name";
        }
        else{
            name = s;
        }
    }
    void setage(int a){
        age = a;
    }
    void setroll_num(int r){
        roll_no = r;
    }
    void setgrade(string g){
        grade = g;
    }

    // Getter function
    void getname(){
        cout << name << endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll_num(){
        cout<<roll_no<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }

};

int main() {

    Student S1;
    // Calling Setter Function
    S1.setname("Faiz");
    S1.setage(19);
    S1.setroll_num(8);
    S1.setgrade("A+");

    // Calling Getter Function
    S1.getname();
    S1.getage();
    S1.getroll_num();
    S1.getgrade();

    return 0;
}
