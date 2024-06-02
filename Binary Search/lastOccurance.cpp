#include<bits/stdc++.h>
using namespace std;

int lastOcc(int n, int target, vector<int> &v){
    int ans = -1;
    int s = 0, e = n-1;

    while(s <= e) {
        int mid = s + (e-s) / 2;

        if(v[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if (target < v[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main() {

    int n = 7;
    int key = 13;
    vector < int > v = {3,4,13,13,13,20,40};

    cout << lastOcc(n,key,v) << "\n";

    return 0;
}