#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[] , int n, int key) {
    int s =0 ,  e = n-1;
    int mid = s + (e-s) / 2;
    int ans = -1;

    while(s <= 0) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) { // right me jao
            s = mid + 1;
        }
        else if (key < arr[mid]) { // left me jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[] , int n, int key) {
    int s =0 ,  e = n-1;
    int mid = s + (e-s) / 2;
    int ans = -1;

    while(s <= 0) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) { // right me jao
            s = mid + 1;
        }
        else if (key < arr[mid]) { // left me jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {

    int n = 8;
    int arr[5] = {1,2,3,3,5};

    cout << "First Occurance of 3 is at Inex : " << firstOcc(arr,5,3) << endl;
    cout << "Last Occurance of 3 is at Inex : " << lastOcc(arr,5,3);
    

    return 0;
}