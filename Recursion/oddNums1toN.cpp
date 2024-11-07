#include<bits/stdc++.h>
using namespace std;

void printAllOdd1ToN(int num) {

    if(num == 0) return;

    if(num % 2 != 1) {
        num--;
    }
    printAllOdd1ToN(num-1);
    cout<<num<<" ";
}

// simplified - 
void printAllOddfrom1toN(int N) {
    if(N <= 0) return;

    if(N%2 == 0) N--;
    printAllOddfrom1toN(N - 2);
    cout<<N<<" ";
    
}

int main() {

    int n = 9;

    printAllOdd1ToN(n);
    cout<<endl;

    cout<<"In Simplified Way - ";
    printAllOddfrom1toN(10);

    return 0;
}
