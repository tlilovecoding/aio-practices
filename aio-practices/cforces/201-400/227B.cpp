#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main(){
    LL n; cin>>n;
    LL arr[n];
    int queries[n] = {-1};
    for(LL i = 0; i < n; i++){
        cin>>arr[i];
        queries[arr[i]] = i+1;
    }

    LL m;
    cin>>m;
    LL p = 0; LL v = 0;
    for(LL i = 0 ; i <m; i++){
        LL x; cin>>x;
        p+=queries[x];
        v+=(n-queries[x])+1;
    }
    cout<<p<<" "<<v;

    //make an array where a[num] is the first position of the number.

}