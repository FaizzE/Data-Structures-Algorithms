#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    map<char, int> freq;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    vector<pair<int, char>> freq_vector;
    for (auto it : freq) {
        freq_vector.push_back({it.second, it.first});
    }

    sort(freq_vector.rbegin(), freq_vector.rend());

    string result = "";
    for (auto it : freq_vector) {
        result.append(it.first, it.second);
    }

    return result;
}

int main() {
    string s = "tree";
    string s1 = "Aabb";
    cout << frequencySort(s) << endl;
    cout << frequencySort(s1) << endl;
    return 0;
}
