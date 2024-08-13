#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkSubarraySum(const vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        int remainder = k == 0 ? sum : sum % k;

        if (mp.find(remainder) != mp.end()) {
            if (i - mp[remainder] >= 2) return true;
        } else {
            mp[remainder] = i;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;
    cout << boolalpha << checkSubarraySum(nums, k) << endl;
    return 0;
}
