#include <bits/stdc++.h>

using namespace std;

string reverseWords(const string& s) {
    int n = s.size();
    stack<string> ans;
    string word;

    for (int i = 0; i < n; ++i) {
        if (s[i] != ' ') {
            word += s[i];
        } else if (!word.empty()) {
            ans.push(word);
            word.clear();
        }
    }

    if (!word.empty()) {
        ans.push(word);
    }

    string result;
    while (!ans.empty()) {
        result += ans.top();
        ans.pop();
        if (!ans.empty()) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string s = "Hello world from the stack";
    cout << reverseWords(s) << endl;
    return 0;
}
