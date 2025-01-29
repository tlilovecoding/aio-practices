#include <bits/stdc++.h>
using namespace std;
int main(){
    string num; cin>>num;
    int ctr = 0;
    for(int i = 0; i < num.length(); i++){
        if(num[i] == '4' || num[i]== '7'){
            ctr++;
        }
    }
    string newCtr = to_string(ctr);
    //cout<<newCtr<<endl;
    bool ok = true;
    for(char i : newCtr){
        if(i != '4' && i !='7'){
            ok = false; break;
        }
    }
    if(ok){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}