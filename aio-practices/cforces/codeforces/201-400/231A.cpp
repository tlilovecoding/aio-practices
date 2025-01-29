#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    int ans = 0;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
        
    }cout<<ans;
}