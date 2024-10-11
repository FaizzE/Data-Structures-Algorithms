#include<bits/stdc++.h>
using namespace std;

int pairsum(const vector<int> &arr) {
    int n = arr.size();
    int ans = 0;
    int i = 0, j = n - 1;
    
    while (i < j) {
        ans = max(ans, arr[i] + arr[j]);
        if (arr[i] > arr[j]) {
            j--;
        } else {
            i++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairsum(arr) << endl;

    return 0;
}
