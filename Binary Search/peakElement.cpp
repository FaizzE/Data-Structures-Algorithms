#include<bits/stdc++.h>
using namespace std;

   
// BruteForce Approach ---->
int findPeakElement (vector<int> &nums) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        if((i == 0 || nums[i-1] < nums[i]) && (i == n-1 || nums[i] > nums[i+1])) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(nums);
    cout << "The Peak is at index : " << ans << "\n";

    return 0;
}