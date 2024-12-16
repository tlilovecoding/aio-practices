#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int odd = 0;
        int even = 0;
        for(int i = 0; i < 2*n; i++){
            int j; cin>>j;
            if(j%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd==even){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}