#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
    int runningSumA;
    int runningSumB;
    int n;
    int cnt = 0;
    cin>>runningSumA>>runningSumB>>n;
    while(runningSumA<=n&&runningSumB<=n){
        if(runningSumA<runningSumB){
            runningSumA +=runningSumB;
            cnt++;
        }else{
            runningSumB+=runningSumA;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
}