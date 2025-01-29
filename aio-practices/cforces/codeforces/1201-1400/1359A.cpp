#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t; 
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        int eachPerson = n/k;
        int maximum;
        if(m==0){
            cout<<0<<endl;
            continue;
        }else{
            maximum = min(m, eachPerson);
            int leftOver = m - maximum;
            if(leftOver==0){
                cout<<m<<endl;
            }else{
                //cout<<3<<endl;
                cout<<maximum - (int)ceil((double)leftOver/(k-1))<<endl;
            }
        }
    }
}