#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> sights;
        for(ll i = 0; i < n; i++){
            ll w; cin>>w;
            sights.push_back(w);
        }
        vector<ll> Ls(n, 0);
        Ls[0] = sights[0];
        for(ll i = 1; i < n; i++){
            Ls[i] = max(Ls[i-1], sights[i]+i);
        }
        
        vector<ll> Rs(n, 0);
        Rs[n-1] = sights[n-1] - n + 1;
        for(ll i = n-2; i >= 0; i--){
            Rs[i] = max(Rs[i+1], sights[i]-i);
        }
        ll ans = 0;
        for(ll i = 1; i < n-1; i++){
            ans = max(ans, Ls[i-1] + sights[i] + Rs[i+1]);
        }
        cout<<ans<<endl;

    }
}