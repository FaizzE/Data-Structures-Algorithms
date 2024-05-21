#include<bits/stdc++.h>
using namespace std;

// int largest(vector<int> arr){
//     // brute force Approach
//     sort(arr.begin(),arr.end());
//     int newarr[arr.size()];
//     for(int i = 0; i < arr.size(); i++){
//         newarr[i]=arr[i];
//     }
//     return newarr;

// }

// int bigger(vector<int> v){
//     int temp=v[0];
//     for(int i = 1; i < v.size(); i++){
//         if(v[i] > temp){
//             temp=v[i];
//         }
//     }
//     return temp;
// }

int largestElement(vector<int> &arr1) {
        sort(arr1.begin(),arr1.end());

        return arr1[arr1.size()-1];
}

int main()
{
    vector<int> arr = {7,3,9,1,5};
   // int n = arr.size();
    largestElement(arr);

    cout << "Largest Element of Array is :" << largestElement;
}