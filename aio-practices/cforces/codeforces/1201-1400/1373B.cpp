#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int c0 = 0;
        int c1 = 0;
        string str;
        cin>>str;
        for(int i = 0; i < str.size(); i++){
            if(str[i]=='0'){
                c0++;
            }else{
                c1++;
            }
        }
        int numPairs = min(c1, c0);
        if((numPairs)%2==0){
            cout<<"NET"<<"\n";
        }else if(numPairs%2==1){
            cout<<"DA"<<"\n";
    }}
}