#include<bits/stdc++.h>
using namespace std;

int factorialofN(int N) {
    if( N == 1 || N == 0) return 1;

    return N * factorialofN(N-1);
}

int main() {

    int n;
    cout<<"Enter Value of N - ";
    cin>>n;

    cout << factorialofN(n); 

    return 0;
}
 