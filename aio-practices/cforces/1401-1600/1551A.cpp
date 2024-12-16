#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long w; cin>>w;
        if(w%3==0){
            cout<<w/3<<" "<<w/3<<endl;
        }else if(w%3 == 1){
            cout<<(w-1)/3+1<<" "<<(w-1)/3<<endl;
        }else{
            cout<<(w-2)/3<<" "<<(w-2)/3+1<<endl;
        }
    }
}