#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        int x; cin>>x; arr[i] = x % 2;
    }
    int cntE = 0;
    int cntO = 0;
    if(count(arr, arr+n, 0) == 1){
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                cout<<i+1;
                break;
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                cout<<i+1;
                break;
            }
        }
    }
}