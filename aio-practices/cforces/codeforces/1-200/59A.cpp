#include <bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    int lowercase = 0, uppercase = 0;
    for(int i =0; i < str.length(); i++){
        if(int(str[i])<=90){
            uppercase++;
        }else{
            lowercase++;
        }
    }
    string newStr = str;
    if(uppercase>lowercase){
        for(int i = 0; i < str.length(); i++){
            newStr[i] = toupper(str[i]);
        }
    }else{
        for(int i = 0; i < str.length(); i++){
            newStr[i] = tolower(str[i]);
        }
    }
    cout<<newStr<<endl;
}