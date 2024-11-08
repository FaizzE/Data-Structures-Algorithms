#include<bits/stdc++.h>
using namespace std;

int sumOfSqaureOfN(int N) {
    if (N == 0) return 0;

    return N*2 + sumOfSqaureOfN(N-1);
}

int main() {

    int num;
    cout << "Enter a Number - ";
    cin>>num;
    cout << sumOfSqaureOfN(num) << endl;

    return 0;
}
