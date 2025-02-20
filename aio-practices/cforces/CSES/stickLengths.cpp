#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    vector<ll> sticks;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        sticks.push_back(a);
    }
    sort(sticks.begin(), sticks.end());
    vector<ll> prefixes;
    ll curr = 0;
    for(int i = 0; i < n; i++){
        curr+=sticks[i];
        prefixes.push_back(curr);
    }
    ll ans = LLONG_MAX;
    for(int i = 0; i < n; i++){
        ll curra = 0;
        ll left = 0;
        ll sumOfLeft;
        if(i!=n-1){
            sumOfLeft = prefixes[n-1] - prefixes[i];
        }else{
            sumOfLeft = 0;
        }
        ll leftExpected = (n-i-1)*sticks[i];
        left = abs(leftExpected - sumOfLeft);
        ll sumOfRight;
        if(i!=0){
            sumOfRight = prefixes[i-1];
        }else{
            sumOfRight = 0;
        }
        ll rightExpected = i*sticks[i];
        ll right = abs(rightExpected - sumOfRight);
        curra = right + left;
        ans = min(ans, curra);
    }
    cout<<ans;
}