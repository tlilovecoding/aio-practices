#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){

    int n; cin>>n;
    ll k; cin>>k;
    vector<ll> ground(n);
    for(int i = 0; i < n; i++){
        cin>>ground[i];
    }
    bool ok = true;
    
    
    vector<pair<ll, ll>> highsAndLows(n+1, {-1, -1});
    for(int i = 0; i < n; i++){
        if(i == 0){
            highsAndLows[i].first = ground[i] + k;
            highsAndLows[i].second = ground[i] + k;
        }
        else if(i == n-1){
            highsAndLows[i].first = ground[i]+k;
            highsAndLows[i].second = ground[i]+k;
        }else{
            highsAndLows[i].second = ground[i]+k;
            highsAndLows[i].first = ground[i] + 2*k - 1;
        }
        if( i != 0 && highsAndLows[i].second > highsAndLows[i-1].first + (k-1)){
            ok = false;
        }else if(i!= 0 && highsAndLows[i].first < highsAndLows[i-1].second - k + 1){
            ok = false;
        }
        if(ok){
            if(i != 0){
                
            highsAndLows[i].second = max(ground[i] + k, highsAndLows[i-1].second - k + 1);
            highsAndLows[i].first = min(ground[i] + 2*k - 1, highsAndLows[i-1].first + k -1);
            }   
        }

        
    }
    if(ok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    }
}