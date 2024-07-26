#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int maxmin = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        int a, b; cin>>a>>b;
        curr-=a;
        curr+=b;
        maxmin = max(maxmin, curr);
    }
    cout<<maxmin;
}