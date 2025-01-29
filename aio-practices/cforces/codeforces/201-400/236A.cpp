#include <bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    set<char> distinctChars(str.begin(), str.end());
    if(distinctChars.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}