#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a, b, c; cin>>a>>b>>c;
    vector<int> dp (n+1, -1); //max number of pieces that can be cut as a ribbon of that length
    dp[0] = 0;
    
    for(int i = 1; i <=n; i++){
        if(i-a >= 0){
            if(dp[i-a] != -1){
                dp[i] = max(dp[i], dp[i-a]+1);    
            }
            //cout<<dp[i]<<" "<<i<<" "<<"a";
        }if(i-b>=0 && dp[i-b] != -1){
            dp[i] = max(dp[i], dp[i-b]+1);
            //cout<<dp[i]<<" "<<i<<" "<<"b";
        }if(i-c>=0 && dp[i-c] != -1){
            dp[i] = max(dp[i], dp[i-c]+1);
            //cout<<dp[i]<<" "<<i<< " "<<"c";
        }
    }
    cout<<dp[n];

}