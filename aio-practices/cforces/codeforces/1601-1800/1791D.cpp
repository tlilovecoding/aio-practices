#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans = 0;
        string w;
        map<char, int> characterCntL;
        map<char, int> characterCntR;
        for(int i = 0; i < n; i++){
            char x; cin>>x;
            w+=x;
            if(characterCntL[x]){
                characterCntL[x]++;
            }else{
                characterCntL[x] = 1;
            }
        }
        for(int i = 0; i < n; i++){
            int curr = 0;
            for(auto &[key, val] : characterCntL){
                if(val > 0){
                    curr++;
                }
            }for(auto &[key, val] : characterCntR){
                if(val > 0){
                    curr++;
                }
            }
            ans = max(ans, curr);
            char c = w[i];
            characterCntL[c]--;
            characterCntR[c]++;
        }
        cout<<ans<<endl;
    }
}