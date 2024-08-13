#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(const vector<int>& numbers, int target) {
    int n = numbers.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int sum = numbers[i] + numbers[j];
        if (sum == target) return {i + 1, j + 1};
        else if (sum > target) j--;
        else i++;
    }
    return {-1, -1};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
