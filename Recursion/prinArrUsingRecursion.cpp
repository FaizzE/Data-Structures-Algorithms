#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void printArr(int arr[], int ind, int n) {
    if(ind == n) return;

    cout<<arr[ind]<<" ";
    printArr(arr, ind+1, n);
}

int main() {


    int arr[] = {1,2,3,4,5};
    printArr(arr,0,5);


    return 0;
}
