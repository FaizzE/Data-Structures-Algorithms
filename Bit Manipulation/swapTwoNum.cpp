#include <bits/stdc++.h>
using namespace std;

pair<int, int> get(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return {a, b};
}

int main() {
    int a, b;
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    pair<int, int> swapped = get(a, b);
    cout << "Swapped values: " << swapped.first << " " << swapped.second << endl;

    return 0;
}
