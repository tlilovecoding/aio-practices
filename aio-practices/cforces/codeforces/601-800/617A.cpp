#include <bits/stdc++.h>
using namespace std;
int main(){
    int ctr = 0;
    int n; cin>>n;
    while(n>=5){
        ctr++;
        n-=5;
    }while(n>=4){
        ctr++;
        n-=4;
    }while(n>=3){
        ctr++;
        n-=3;
    }while(n>=2){
        ctr++;
        n-=2;
    }while(n>=1){
        ctr++;
        n-=1;
    }
    cout<<ctr;
}