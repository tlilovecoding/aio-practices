#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<long long> a;
        vector<long long> b;
        for(int i = 0; i < n; i++){
            long long w; cin>>w;
            a.push_back(w);
        }for(int i = 0; i < m; i++){
            long long w; cin>>w;
            b.push_back(w);
        }
        sort(b.begin(), b.end());
        bool ok = true;
        a[0] = min(b[0]-a[0], a[0]);
        for(int i = 1; i < n; i++){
            long long maximum; long long minimum;
            long long bma;
            auto it = lower_bound(b.begin(), b.end(), a[i]+a[i-1]);
            long long index = it - b.begin();
            if (it == b.end()) { // Handle out-of-bounds access
                index = -1;
            }
            if(index != -1){
                minimum = min(b[index]-a[i], a[i]);
                maximum = max(b[index]-a[i], a[i]);
            }else{
                minimum = a[i];
                maximum = a[i];
            }
            
            if(minimum >= a[i-1]){
                a[i] = minimum;
            }else if(maximum >= a[i-1]){
                a[i] = maximum;
            }else{
                ok = false;
                break;
            }
        }
        if(!ok){
            cout<<"NO"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        
    }
}