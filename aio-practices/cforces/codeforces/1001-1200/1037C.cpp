//101010101010 
//011011001001
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string a; cin>>a;
    string b; cin>>b;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]){
            continue;
        }else if(a[i+1] == b[i] && a[i] == b[i+1]){
            ans++;
            a[i] = b[i];
            a[i+1] = b[i+1];
        }else{
            a[i] = b[i];
            ans++;
        }
        
    }
    cout<<ans;
}