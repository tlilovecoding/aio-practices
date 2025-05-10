#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll numHamburgers, ll b, ll s, ll c, ll p1, ll p2, ll p3, ll a, ll d, ll e, ll price) {
    ll neededB = max(0LL, b * numHamburgers - a);
    ll neededS = max(0LL, s * numHamburgers - d);
    ll neededC = max(0LL, c * numHamburgers - e);

    ll totalCost = neededB * p1 + neededS * p2 + neededC * p3;
    return totalCost <= price;
}


int main(){
    string w; cin>>w;
    ll b = 0, s = 0, c = 0;
    for(int i = 0; i < w.size(); i++){
        if(w[i] == 'B'){
            b++;
        }else if(w[i] == 'S'){
            s++;
        }else{
            c++;
        }
    }
    
    int a, d, e; 
    cin>>a>>d>>e;
    int p1, p2, p3;
    cin>>p1>>p2>>p3;
    ll price; cin>>price;
    //binary search to see if a value is ok
    ll l = 0;
    
    ll r = 10000000000000;
    ll ans = 0;
    while(l<=r){
        ll m = (l+r)/2;
        bool ok = check(m, b, s, c, p1, p2, p3, a, d, e, price);
        if(ok){
            ans = m;
            l = m+1;
        }else{
            r = m-1;
        }
    }
    cout<<ans;


}