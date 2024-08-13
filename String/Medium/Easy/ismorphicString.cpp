#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t) {
    vector<int> mp1(256, -1);
    vector<int> mp2(256, -1);
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        char ch1 = s[i];
        char ch2 = t[i];
        
        if ((mp1[ch1] != -1 && mp1[ch1] != ch2) ||
            (mp2[ch2] != -1 && mp2[ch2] != ch1)) {
            return false;
        }
        
        mp1[ch1] = ch2;
        mp2[ch2] = ch1;
    }
    
    return true;
}

int main() {
    string s = "paper";
    string t = "title";
    cout << boolalpha << isIsomorphic(s, t) << endl;
    return 0;
}
