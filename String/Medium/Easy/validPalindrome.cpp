#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    string newS = "";
    for (int i = 0; i < s.size(); ++i) {
        if (isalnum(s[i])) {
            newS += tolower(s[i]);
        }
    }
    string reversedS = newS;
    reverse(reversedS.begin(), reversedS.end());

    return newS == reversedS;
}

int main() {
    string s = "A man, a plan, a canal, Panama";
    cout << boolalpha << isPalindrome(s) << endl;
    return 0;
}
