/*
    - 
*/
#include<bits/stdc++.h>
using namespace std;

class Human {
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    // within the function all above access modifiers accessable , but outside not.
    void func(){
        a = 10;
        b = 20;
        c = 30;
    }
};

int main() {
    Human faiz;
    // faiz.a = 30; 
    // faiz.b = 30;
    faiz.func();

    return 0;
}
