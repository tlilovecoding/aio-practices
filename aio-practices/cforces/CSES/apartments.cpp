#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin>>n>>m;
    ll k; cin>>k;
    vector<ll> a;
    for(int i = 0; i< n; i++){
        ll w; cin>>w;
        a.push_back(w);
    }
    vector<ll> b; 
    for(int i = 0; i < m; i++){
        ll w; cin>>w;
        b.push_back(w);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ap = 0;
    int bp = 0;
    int cnt = 0;
    while(ap!=n && bp!= m){
        if(abs(b[bp] - a[ap]) <= k){
            ap++;
            bp++;
            cnt++;
        }else if(b[bp] < a[ap]){
            bp++;
        }else{
            ap++;
        }
    }
    cout<<cnt;
}