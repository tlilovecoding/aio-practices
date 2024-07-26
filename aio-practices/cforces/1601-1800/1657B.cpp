#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        long long a, b, x, y;
        cin>>a>>b>>x>>y;
        long long sum = 0;
        long long curr = 0;
        for(int i = 0; i<a; i++){
            if(curr+x<=b){
                curr+=x;
                sum+=curr;
            }else{
                curr -= y;
                sum+=curr;
            }
        }
        cout<<sum<<endl;
    }
}