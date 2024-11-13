#include<bits/stdc++.h>
using namespace std;


void print1ToN(int N) {

    if(N == 0) return;
    if(N%2 != 0) {
        N--;
    }
    print1ToN(N-2);
    cout<<N<<" ";
}
// In simplified Way -
void printEven(int num, int N) {
    if(num > N) return;

    if(num % 2 != 0){
        num++;
    }
    cout<<num<<" ";
    printEven(num+2, N);
}
int main() {

    int n = 29;

    print1ToN(n);

    cout<<endl;
    cout<<"Simplified - ";
    printEven(1,30);

    return 0;
}
