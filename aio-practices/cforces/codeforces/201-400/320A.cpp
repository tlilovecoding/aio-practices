#include <bits/stdc++.h>
using namespace std;
int main(){
    string num; cin>>num;
    long long fourCount = 0;
    bool tru = true;
    if(num[0]=='4'){
            cout<<"NO";
            tru = false;
    }
    for(int i = 0; i <num.length() && tru; i++){
        if(num[i]!='1' && num[i]!='4'){ 
            cout<<"NO";
            tru = false;
        }else if(num[i]=='1'){
            fourCount = 0;
        }else if(num[i]=='4'){
            fourCount++;
            if(fourCount>=3){
                cout<<"NO";
                tru = false;
            }
        }
    }if(tru==true){cout<<"YES";}

}