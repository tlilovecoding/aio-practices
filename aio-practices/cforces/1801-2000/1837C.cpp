#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        char c = '0';
        string w;
        cin>>w;
        for(int i = 0; i < w.size(); i++){
            if(w[i] == '?'){
                w[i] = c;
            }c = w[i];
        }
        cout<<w<<endl;
    }
}