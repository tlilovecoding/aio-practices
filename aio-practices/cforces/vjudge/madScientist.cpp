#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string a; cin>>a;
    string b; cin>>b;
    int ans = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(curr == 0){
                ans++;
                curr++;
            }else{
                curr++;
            }
        }else{
            curr = 0;
        }
    }
    cout<<ans;
}