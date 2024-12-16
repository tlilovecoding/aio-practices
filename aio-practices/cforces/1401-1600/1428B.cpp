#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string w;
        cin>>w;
        string ans;
        for(int i = 0; i < w.size(); i++){
            ans+=w[i];
            if(ans.size()>=2){
                if(ans.substr(ans.size()-2) == "AB" || ans.substr(ans.size()-2) == "BB"){
                    ans.resize(ans.size()-2);
                }
            }
        }
        cout<<ans.size()<<endl;
    }
}