#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
int is_Sorted( vector<int> vec ){
    int n = vec.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vec[i] > vec[j]){
                return 0;
            }
        }
    }
    return 1;
}

// optimal approach :-
int SortedorNot(vector<int> vec){
    for(int i = 1; i < vec.size(); i++){
        if(vec[i-1] > vec[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    vector <int> v = {1,2,4,6,8};
    
    vector <int> v1 = {1,3,2,6,4};
    

    // cout << "Sorted Or Not : "  << is_Sorted(v) << endl;
    // cout << "Sorted Or Not : "  << is_Sorted(v1) << endl;

    cout << "Sorted Or Not : "  << SortedorNot(v) << endl;
    cout << "Sorted Or Not : "  << SortedorNot(v1) << endl;


}