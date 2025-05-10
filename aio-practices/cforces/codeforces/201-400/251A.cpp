#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, d; cin>>n>>d;
    vector<ll> points;
    for(int i = 0; i < n; i++){
        ll w; cin>>w;
        points.push_back(w);
    }
    ll ans = 0;
    for(int i = 0; i < n-2; i++){
        ll l = i+2;
        ll r = n-1;ll last_valid = i;  // Start with `i` instead of 0

        while (l <= r) {
            ll mid = (l + r) / 2;
            
            if (points[mid] - points[i] <= d) {
                last_valid = mid; // Store last valid index
                l = mid + 1; // Move right to find a higher valid index
            } else {
                r = mid - 1; // Move left to reduce range
            }
        }
        
        ll curr = ((last_valid - i)*(last_valid-i-1))/2;
        ans+=curr;
    }
    cout<<ans;
}