#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string w; cin>>w;
        char prev = w[0];
        string curr;
        curr+=prev;
        for(int i = 1; i < n; i++){
            if(w[i] >= prev){
                break;
            }else{
                curr+=w[i];
                prev = w[i];
            }
        }
        string ans = curr;
        reverse(curr.begin(), curr.end());
        ans+=curr;
        cout<<ans<<endl;
    }
}