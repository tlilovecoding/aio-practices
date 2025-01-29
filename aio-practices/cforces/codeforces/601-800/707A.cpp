#include <bits/stdc++.h>
using namespace std;
int main(){
    int z, b;
    cin>>z>>b;
    bool a = false;
    for(int i = 0; i < z*b; i++){
        char asopdk; cin>>asopdk;
        if(asopdk == 'C' || asopdk == 'M' || asopdk == 'Y'){
            a = true;
            break;
        }
    }
    if(a){
        cout<<"#Color";
    }else{
        cout<<"#Black&White";
    }
}