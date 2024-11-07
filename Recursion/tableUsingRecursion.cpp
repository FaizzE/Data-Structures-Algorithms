#include <bits/stdc++.h>
using namespace std;

void printTable(int N, int M) {
    if (M == 0) {
        return;
    }

    printTable(N, M - 1);  // Correct order: decrement M, keeping N fixed
    cout << N << " X " << M << " = " << M * N << endl;
}

int main() {
    int n = 25;  // Number for which we want the multiplication table
    int m = 10;  // Number of terms in the multiplication table
    printTable(n, m);

    return 0;
}
