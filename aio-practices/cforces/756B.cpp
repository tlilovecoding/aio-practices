#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    vector<ll> trips (n);
    for(int i = 0; i < n; i++){
        cin>> trips[i];
    }
    vector<ll> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = dp[i-1] + 20;
        int j = i;
        while(j > 0 && trips[i-1] - trips[j-1] < 90){
            //cuz the trip time can't last that long bro
            j--;
        }
        dp[i] = min(dp[i], dp[j] + 50);
        int z = i;
        while(z > 0 && trips[i-1] - trips[z-1] < 1440){
            z--;
        }
        dp[i] = min(dp[i], dp[z] + 120);
        cout<<dp[i] - dp[i-1];
    }
}
// could use lower bound to find the first element thats 90 min before.