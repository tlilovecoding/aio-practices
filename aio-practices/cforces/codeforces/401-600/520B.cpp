#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int ans = 0;
    while(b!=a){
        if(b>a){
            if(b%2==1){
                b+=1;
                ans++;
            }
            b/=2;
            ans++;
        }else{
            b++;
            ans++;
        }
    }
    cout<<ans;
}