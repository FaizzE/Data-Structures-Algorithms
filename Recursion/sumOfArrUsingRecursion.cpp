#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int sumOfArr(int arr[], int ind, int n) {
    if(ind == n) return 0;

    return arr[ind] + sumOfArr(arr,ind+1,n);

}

int main() {

    int nums[] = {3,4,5,8,2};
    cout<<sumOfArr(nums,0,5);


    return 0;
}
