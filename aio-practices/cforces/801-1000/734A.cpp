#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a = 0, b = 0;
    string str; cin>>str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A'){
            a++;
        }else{
            b++;
        }
    }
    if(a>b){
        cout<<"Anton";
    }else if (b>a){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}