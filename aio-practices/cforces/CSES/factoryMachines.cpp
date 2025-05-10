#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid, ll t, vector<ll> times, ll n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        // adding products that a machine can produce to sum
        sum+=(mid/times[i]);
        if(sum>=t){
            //then at that time, at least t products can be produced
            return true;
        }
    }
    return false;
}
int main(){
    ll n, t; cin>>n>>t;
    vector<ll> time;
    ll maxTime = INT_MAX;
    for(int i = 0; i < n; i++){
        ll w; cin>>w;
        time.push_back(w);
        maxTime = min(time[i], maxTime);
    }
    //binary search for the answer, which should be a sum that is JUST over or equal to T.
    //if the sum of the number of products that each machine can make in MID time >= t, then MID is valid.
    // max time that can be taken is if the minimum product creating tim eis repeated over and over
    maxTime = maxTime *t;
    // above = high
    ll low = 1;
    ll ans = 0;
    while(low <= maxTime){
        ll mid = (maxTime + low)/2;
        if(check(mid, t, time, n) == true){
            ans = mid;
            maxTime = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<ans;
}