#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n, ll mid, vector<ll> arr, ll k){
    ll currSum = 0;
    ll maxSum = 0;
    int currNumPartitions = 1;
    for(int i = 0; i < n; i++){
        if(currSum + arr[i] > mid){
            currNumPartitions ++;
            currSum = arr[i];
            maxSum = max(currSum, maxSum);
        }
        else{
            currSum+=arr[i];
            maxSum = max(currSum, maxSum);
        }
        if(currNumPartitions > k){
            return -1;
        }
    }
    return maxSum;
}
int main(){
    ll n, k; cin>>n>>k;
    vector<ll> array;
    ll maax = 0;
    ll suma = 0;
    for(int i = 0; i < n; i ++){
        ll w; cin>>w;
        array.push_back(w);
        suma += array[i];
        maax = max(w, maax);
    }
    ll l = maax;
    ll r = suma;
    ll ans = suma;
    while(l <= r){
        ll mid = (r+l)/2;
        //2 3 4 5 7
        if(check(n, mid, array, k) != -1){
            ans = check(n, mid, array, k);
            r = ans-1;
        }else{
            l = mid + 1;
        }
    }
    cout<<ans;
    
}