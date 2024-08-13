#include <bits/stdc++.h>

using namespace std;

bool doesAliceWin(string s) {
    int cnt = 0;
    for (auto ch : s) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cnt++;
        }
    }
    return cnt > 0;
}

int main() {
    string s = "hello";
    cout << boolalpha << doesAliceWin(s) << endl;
    return 0;
}
