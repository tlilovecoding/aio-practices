#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w; cin>>k>>n>>w;
    int numBananas = 0;
    for(int i = 1; i < w+1; i ++){
        numBananas+=(i*k);
    }
    if(numBananas-n<0){
        cout<<0;
    }
    else{cout<<numBananas-n;}

}