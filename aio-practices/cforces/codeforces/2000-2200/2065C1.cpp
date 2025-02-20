#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<long long> a;
        for(int i = 0; i < n; i++){
            long long c; cin>>c;
            a.push_back(c);
        }
        long long changeNumber;
        cin>>changeNumber;
        bool ok = true;
        a[0] = min(changeNumber-a[0], a[0]);
        for(int i = 1; i < n; i++){
            if(min(changeNumber- a[i], a[i]) >= a[i-1]){
                a[i] = min(changeNumber- a[i], a[i]);
            }else if(max(a[i], changeNumber - a[i]) >= a[i-1]){
                a[i] = max(a[i], changeNumber - a[i]);
            }else{
                ok = false;
            }
        }
        if(ok==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"nO"<<endl;
        }

    }
}