#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0; i < 7; i++){
        cin>>arr[i];
    }
    sort(arr, arr+7);
    int a = arr[0];
    int c;
    int b = arr[1];
    if(arr[2] == a + b){
        c = arr[3];
    } else{
        c = arr[2];
    }
    cout<<a<<" "<<b<<" "<<c;
}