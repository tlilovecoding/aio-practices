#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    string w = "";
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '.'){
            w+="0";
        }else if(x[i] == '-'){
            if(x[i+1]=='.'){
                i++;
                w+="1";
            }else{
                i++;
                w+="2";
            }
        }
    }
    cout<<w;
}