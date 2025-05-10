#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int x; cin>>x;
        string w (s.size(), '1');
        for(int i = 0; i < s.size(); i++){
            char l = s[i];
            if(l == '0'){
                if(i-x >=0){
                    w[i-x] = '0';
                }if(i+x < s.size()){
                    w[i+x] = '0';
                }
            }
        }
        bool ok = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                bool firstOk = false;
                bool secondOk = false;
                if(i-x >= 0){
                    if(s[i] == '1' && w[i-x] == '1'){
                        firstOk = true;
                    }
                }
                if(i + x < s.size()){
                    if(s[i] == '1' && w[i+x] == '1'){
                        secondOk = true;
                    }
                }
                if(firstOk == false && secondOk == false){
                    ok = false;
                }  
            }
            
        }
        if(ok){
            cout<<w<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}