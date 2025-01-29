#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        int p1[a];
        int p2[b];
        for(int i = 0; i < a; i++){
            cin>>p1[i];
        }
        for(int i = 0; i <b; i++){
            cin>>p2[i];
        }
        sort(p1, p1+a, greater<int>());
        sort(p2, p2+b, greater<int>());
        if(p1[0]>p2[0]){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}