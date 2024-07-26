#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    int scores[n];
    for(int i = 0; i < n; i++){
        cin>>scores[i];
    }
    int required = scores[k-1];
    int ctr = 0;
    for(int i = 0; i < n; i++){
        if(scores[i]>=required && scores[i]>0){
            ctr++;
        }
    }
    cout<<ctr;
}