#include <bits/stdc++.h>
using namespace std;
int n;
int t;
int main(){
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        if(n%3 == 0){
            cout<<"Second"<<"\n";
        }else{
            cout<<"First"<<"\n";        }
    }

}