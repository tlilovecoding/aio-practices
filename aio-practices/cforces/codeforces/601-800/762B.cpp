#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int m; cin>>m;
    vector<ll> usb;
    vector<ll> ps2;
    for(int i = 0; i < m; i++){
        ll j; string k; cin>>j>>k;
        if(k=="USB"){
            usb.push_back(j);
        }else{
            ps2.push_back(j);
        }
    }
    int ptr1 = 0, ptr2 = 0;
    sort(usb.begin(), usb.end());
    sort(ps2.begin(), ps2.end());
    int ans = 0;
    ll price = 0;
    bool stop = false;
    bool doneA = false;
    bool doneB = false;
    
    while (a > 0 && ptr1 < usb.size()) {
        price += usb[ptr1++];
        ans++;
        a--;
    }

    // Use PS/2 ports
    while (b > 0 && ptr2 < ps2.size()) {
        price += ps2[ptr2++];
        ans++;
        b--;
    }
    while(c>0){
        if(ptr1 < usb.size() && ptr2 < ps2.size()){
            if(usb[ptr1] > ps2[ptr2]){
                price+=ps2[ptr2];
                ans++;
                c--;
                ptr2++;
            }else{
                price+=usb[ptr1];
                ans++;
                c--;
                ptr1++;
            }
        }else if(ptr1 < usb.size()){
            price+=usb[ptr1];
            ans++;
            c--;
            ptr1++;
        }else if(ptr2 < ps2.size()){
            price+=ps2[ptr2];
            ans++;
            c--;
            ptr2++;
        }else{
            break;
        }
    }
    cout<<ans<<" "<<price;
}