#include<bits/stdc++.h>
using namespace std;

void print1ToN(int num) {

    if(num == 0) return;
    print1ToN(num-1);
    cout<<num<<" ";
}

int main() {

    int n = 10;

    print1ToN(n);

    return 0;
}
