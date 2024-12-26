#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<int> a;
        vector <int> b;
        ll first1 = 1e9 + 1;
        ll first_1 = 1e9 + 1;
        // if value greater, then tehere must be a 1 before
        //if value lowe,r then there must be a -1 before
        for(ll i = 0; i < n; i++){
            ll x; cin>>x;
            if(x==-1){
                first_1 = min(first_1, i);
            }else if(x==1){
                first1 = min(first1, i);
            }
            a.push_back(x);
        }for(ll i = 0; i < n; i++){
            ll x; cin>>x;
            b.push_back(x);
        }
        bool ok = true;
        for(ll i = 0; i < n; i++){
            if(b[i] < a[i]){
                if(first_1 >= i){
                    cout<<"NO"<<endl;
                    ok = false;
                    break;
                }
            }else if(b[i] > a[i]){
                if(first1 >= i){
                    cout<<"NO"<<endl;
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
    }

}