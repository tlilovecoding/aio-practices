#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    vector<long long> arr;
    for(long long i = 0; i < n; i++){
        long long j; cin>>j;
        arr.push_back(j);
    }
    sort(arr.begin(), arr.end());
    long long curr = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        if(curr <= arr[i]){
            ans++;
            curr+=arr[i];
        }
    }
    cout<<ans;
}