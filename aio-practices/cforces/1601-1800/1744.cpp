#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    string str;
    int n;
    char starting;
    while(t--){
        cin>>n>>starting>>str;
        int ans = 0;
        int ctr = 0;
        if(starting == 'g'){
            cout<<0<<"\n";
            continue;
        }
        str+=str;
        for(int i = 0; i < str.length(); i++){
            if(str[i]==starting){
                ctr = 0;
                while(str[i]!='g' &&i<str.size()){
                    ctr++;
                    i++;
                }
                ans = max(ans, ctr);
                
            }

        }
        cout<<ans<<"\n";
    }
}