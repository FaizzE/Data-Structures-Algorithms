#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    int n = strs.size();
    if (n == 0) return ans;

    sort(strs.begin(), strs.end());
    string first = strs[0], last = strs[n - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] != last[i]) {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
