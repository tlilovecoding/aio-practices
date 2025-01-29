#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string x;
        cin>>x;
        for(int i = 0; i < x.size(); i++){
            if(x[i] == 'p'){
                x[i] = 'q';
            }else if(x[i] == 'q'){
                x[i] = 'p';
            }
        }
        reverse(x.begin(), x.end());
        cout<<x<<endl;
    }
}