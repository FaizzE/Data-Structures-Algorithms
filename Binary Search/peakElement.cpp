#include<bits/stdc++.h>
using namespace std;

   
// BruteForce Approach ---->

// Time Complexity: O(N).
// Space Complexity: O(1) as we are not using any extra space.
int findPeakElement (vector<int> &nums) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        if((i == 0 || nums[i-1] < nums[i]) && (i == n-1 || nums[i] > nums[i+1])) {
            return i;
        }
    }
    return -1;
}


// Optimal Approach - Using Binary Search ---->

// Time Complexity: O(logN), N = size of the given array.
// Reason: We are basically using binary search to find the minimum.

// Space Complexity: O(1)

int findPeakElementt(vector<int> &arr) {
    int n = arr.size(); 

    // Edge cases:
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        //If arr[mid] is the peak:
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;

        // If we are in the left:
        if (arr[mid] > arr[mid - 1]) low = mid + 1;

        // If we are in the right:
        else high = mid - 1;
    }
   
    // Dummy return statement
    return -1;
}



int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElementt(nums);
    cout << "The Peak is at index : " << ans << "\n";

    return 0;
}
