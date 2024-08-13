#include <bits/stdc++.h>

using namespace std;

int percentageLetter(string s, char letter) {
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == letter) cnt++;
    }
    return (cnt * 100) / n;
}

int main() {
    string s = "hello world";
    char letter = 'o';
    cout << percentageLetter(s, letter) << "%" << endl;
    return 0;
}
