#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string str = "";
        if(n==1){
            cout<<'a'<<endl;
        continue;
        }else if(n==2){
            cout<<"ab"<<endl;
            continue;
        }
        if(n%2 != 0){
            for(int i = 0; i < (n/2); i++){
                str+='a';
            }
            str+="bc";
            for(int i = 0; i < ((n/2)-1); i++){
                str+='a';
            }
        }else{
            for(int i = 0; i < (n/2); i++){
                str+='a';
            }
            str +='b';
                
            for(int i = 0; i < ((n/2)-1); i++){
                str+='a';
            }
        }
        cout<<str<<endl;
    }
}