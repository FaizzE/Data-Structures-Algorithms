#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach ;-
int rmv_Duplicates(int arr[],int n){
    set<int>st;

    for(int i =0; i  < n; i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int j = 0;

    for(int x : st){
        arr[j++] = x;
    }
    
    return k;    
    
}

// optimal approach :-


int main()
{
    int arr[] = {1,2,8,6,8,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = rmv_Duplicates(arr,n);
    
    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }

}