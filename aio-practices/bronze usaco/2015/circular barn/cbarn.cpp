#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int n; cin>>n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin>>numbers[i];
    }
    int ans = 1e9;
    for(int i = 0; i < n; i++){
        int curr = 0;
        for(int j = 0; j < n; j++){
            curr+=j*numbers[(i+j)%n];
        }
        ans = min(ans, curr);
    }
    cout<<ans<<endl;

}