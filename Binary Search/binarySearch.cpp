#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    // int mid = (start + end) / 2;

    // use this mid 👇 istead of above mid
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        // to find element in right part 
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            // key < arr[mid]
            end = mid - 1;
        }
        // and change this 👇 according to above mid 
        mid = start + (end - start) / 2;
    }

    return -1;
    
}


int main() {
    int even[6] = {2,4,6,8,12,18};
    int odd [5] = {3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << "index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << "index of 14 is " << oddIndex << endl;




    return 0;
}