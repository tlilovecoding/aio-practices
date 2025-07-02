#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        string str; cin>>str;
        int cntz = 0;
        int cnto = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '0'){
                cntz++;
            }else{
                cnto++;
            }
        }
        if(cntz < k && cnto < k){
            cout<<"NO"<<endl;
            return 0;
        }
        //optimal to alternate between 0s used and 1s used to make pairs
        int needk = k;
        bool ones;
        if(cntz > cnto){
            ones = false;
        }else{
            ones = true;
        }

        while(needk > 0){
            if(cnto >= cntz && cnto >=2){
                cnto-=2;
                needk--;
            }else if(cntz >=2){
                cntz-=2;
                needk--;
            }else{
                break;
            }
        }
        if(cntz - cnto >=2 || cnto - cntz >=2 || needk != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}