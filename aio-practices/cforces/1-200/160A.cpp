#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int coins[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>coins[i];
        sum+=coins[i];
    }
    sort(coins, coins+n, greater<int>());
    int curr = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(curr<=ceil(sum/2)){
            ans++;
            curr+=coins[i];
        }else{
            cout<<ans;
            break;            
        }    
    }

}