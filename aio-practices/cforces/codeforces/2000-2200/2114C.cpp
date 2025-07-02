#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            // remove ifits the same thing cuz it may block future but removing will never 
            //worsen the answer
            cin>>a[i];
        }
        int ans = 1;
        int prev = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] -1 > prev){
                ans++;
                prev = a[i];
            }
        }
        cout<<ans<<endl;
    }
}