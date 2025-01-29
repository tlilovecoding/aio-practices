#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t; 
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        if(a<c){
            cout<<1<<" ";
            if(c>=b*a){
                cout<<-1<<endl;
            }else{
                cout<<b<<endl;
            }
        }
        else if(a>=c){
            cout<<-1<<" ";
            cout<<b<<endl;
        }
    }
}