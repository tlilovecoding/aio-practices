#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int m, a, b, c;
        cin>>m>>a>>b>>c;
        int avail = m*2;
        avail -= min(a, m);
        avail -= min(b, m);
        avail -= min(avail, c);
        cout<<2*m - avail<<endl;
    }
}