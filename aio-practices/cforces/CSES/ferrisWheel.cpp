#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, x; cin>>n>>x;
    vector<ll> weights(n);
    for(int i = 0; i < n; i++){
        cin>>weights[i];
    } 
    sort(weights.begin(), weights.end());
    //pair lightest and heaviest
    int l = 0, r = n-1;
    int ans = 0;
    while(l <= r){
        if(weights[l] + weights[r] <= x){
            ans++;
            l++;
            r--;
        }else{
            ans++;
            r--;
        }
    }
    cout<<ans;
}