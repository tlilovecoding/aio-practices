#include <bits/stdc++.h>
using namespace std;
int t; 
int main(){
    cin>>t;
    while(t--){
        int num; cin>>num;
        int num2 = char(num);
        if(num<=9){
            cout<<num<<"\n";
        }else if(num<=17){
            cout<<num-9<<9<<"\n";
        }else if(num<=24){
            cout<<num-17<<8<<9<<"\n";
        }else if(num<=30){
            cout<<num-24<<7<<8<<9<<"\n";
        }else if(num<=35){
            cout<<num-30<<6<<7<<8<<9<<"\n";
        }else if(num<=39){
            cout<<num-35<<5<<6<<7<<8<<9<<"\n";
        }else if(num<=42){
            cout<<num-39<<4<<5<<6<<7<<8<<9<<"\n";
        }else if(num<=44){
            cout<<num-42<<3<<4<<5<<6<<7<<8<<9<<"\n";
        }else if(num<=45){
            cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}