#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n; cin>>n;
    vector<int> arr;
    vector<int> arr2;
    for(int i = 0; i < n; i++){
        int w; cin>>w;
        arr.push_back(w);
        arr2.push_back(w);
    }
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]!=arr2[i]){
            cnt++;
        }
    }
    cout<<cnt-1;

}