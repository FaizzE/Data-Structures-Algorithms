#include<bits/stdc++.h>
using namespace std;

int powerOf2(int N, int x) {

    // Base case
    if( x==1) return N;

    return N*powerOf2(N,x-1);

}

int main() {

    int num; 
    cout << "Enter the Number : ";
    cin>>num;

    cout << "Power of N is - " << powerOf2(2,num) <<endl;

    return 0;
}
