#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll k, n;
    ll x;
    cin>>k>>n>>x;
    vector<ll> x_values;
    ll curr = 0;
    while(x--){
        ll speedUpDistance = 0;
        ll slowDownDistance = 0;
        ll count = 0;
        for(ll speed = 1;; speed++){
            speedUpDistance+=speed;
            count++;
            if(speedUpDistance + slowDownDistance >= n){
                cout<<count<<endl;
                break;
            }
            if(speed>=k){
                slowDownDistance++;
                count++;
                if(speedUpDistance + slowDownDistance >=n){
                    cout<<count<<endl;
                }
            }
        }
        

    }

}