#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0) return 1;
    return fact(n-1) * n;
}

int main(){
    
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << fact(n);

    return 0;
}
// 1. Number of function calls
// 2. What is complexity of each function
// Time Complexuty -> O(n)