#include <bits/stdc++.h>
using namespace std;
string str;
int main(){
    cin>>str;
    bool h = false, e = false, l1 = false, l2 = false, o = false;
    for(int i = 0; i < str.length(); i++){
        if(!h){
            if(str[i]=='h'){
                h = true;
            }
        }else if(!e){
            if(str[i] == 'e'){
                e = true;
            }
        }else if(!l1){
            if(str[i] == 'l'){
                l1 = true;
            }
        }else if(!l2){
            if(str[i] == 'l'){
                l2 = true;
            }
        }else if(!o){
            if(str[i] == 'o'){
                o = true;
            }
        }
    }
    if(h&&e&&l1&&l2&&o){
        cout<<"YES";
    }else{
        cout<<"NO";
    } 
}