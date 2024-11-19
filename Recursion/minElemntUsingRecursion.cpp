#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int minEle(int arr[], int ind, int sizeOfArr) {
    if(ind == sizeOfArr-1) return arr[ind]; 

    // return min(arr[ind], minEle(arr,ind+1,sizeOfArr));
    return max(arr[ind], minEle(arr,ind+1,sizeOfArr));
}

int main() {

    int nums[] = {4,1,5,6,8,7};
    cout<<minEle(nums,0,6);

    return 0;
}
