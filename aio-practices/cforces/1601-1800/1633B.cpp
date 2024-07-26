#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    int count;
    cin>>t;
    while(t--){
        int zeroCount = 0;
        int oneCount = 0;
        string str; cin>>str;
        int currMaxRemoved = 0;
        for(int i = 0; i < str.length(); i++){
            char x = str[i];
            if(x=='0'){
                zeroCount++;
            }else{
                oneCount++;
            }
        }
        if(oneCount<zeroCount){
            cout<<oneCount<<endl;
        }else if (zeroCount<oneCount){
            cout<<zeroCount<<endl;
        }else if(zeroCount == oneCount){
            if(str[str.length()-1]=='0'){
                cout<<zeroCount-1<<endl;
            }else{
                cout<<oneCount-1<<endl;
            }
        }
    }

}