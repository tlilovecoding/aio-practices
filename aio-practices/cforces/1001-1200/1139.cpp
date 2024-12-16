#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<long long> arr;
    for(int i = 0; i < n; i++){
        long long j; cin>>j;
        arr.push_back(j);
    }
    long long ans = arr[n-1];
    long long curr = arr[n-1];
    for(int i = n-2; i >-1; i--){
        curr = min(arr[i], curr-1);
        ans+=max(curr, 0LL);
    }
    cout<<ans;
}