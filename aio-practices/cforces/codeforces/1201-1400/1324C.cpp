#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string str; cin>>str;
        str.push_back('R');
        int lastRIdx = -1;
        int biggestJumpNeeded = 0;
        for(int i = 0; i < str.length()+1; i++){
            if(str[i]=='R'){
                biggestJumpNeeded = max(i-lastRIdx, biggestJumpNeeded);
                lastRIdx = i;
            }
        }cout<<biggestJumpNeeded<<endl;
    }
}