#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int s; cin>>s;
        if(sqrt(s) == int(sqrt(s))){
            cout<<floor(sqrt(s)/2)<<" "<<ceil(sqrt(s)/2)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}