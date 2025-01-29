#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int t;
int main(){
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>a>>b>>c;
        if(c%2 == 1){
            if(a+1>b){
                cout<<"First"<<"\n";
            }else{
                cout<<"Second"<<"\n";}
        }else{
            if(a>b){
                cout<<"First"<<"\n";
            }else{
                cout<<"Second"<<"\n";
        }
    
    }
}
}