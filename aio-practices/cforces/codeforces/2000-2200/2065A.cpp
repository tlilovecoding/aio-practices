#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string w; cin>>w;
        string ans = "";
        for(int i = 0; i < w.size()-2; i++){
            ans+=w[i];
        }
        ans+='i';
        cout<<ans<<endl;
    }
}
