#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int lengths[n];
    for(int i = 0; i < n; i++){
        cin>>lengths[i];
    }
    bool ok = false;
    sort(lengths, lengths+n);
    for(int i = 0; i < n-2; i++){
        if(lengths[i]+lengths[i+1]>lengths[i+2]){
            ok = true;
        }
    }
    if(ok){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}