#include<bits/stdc++.h>
using  namespace std;
#define ll long long
int main()
{
    int arr[5] = {1,2,3,3,5};
    int key = 3;

    for(int i = 0; i < 5; i++){
        if(arr[i] == key) {
            cout << i ;
            break;
        }
    }
    for(int i = 5-1; i >= 0; i--){
        if(arr[i] == key) {
            cout << i;
            break;
        }
    }

    return 0;
}