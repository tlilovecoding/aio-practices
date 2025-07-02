#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        int sumOfHappiness = 0;
        vector<pair<ll, int>> months(m);
        ll x; cin>>x;
        for(int i = 0; i < m; i++){
            ll c; cin>>c;
            int h; cin>>h;
            sumOfHappiness+=h;
            months[i] = {c, h};
        }
        //dp[i] is min cost needed for happiness i
        //for each month u see if it's the min.
        //max happiness u can reach with 

        vector<ll> dp(sumOfHappiness+1, -1);
        //wtv
        dp[0] = 0;
        ll amtOfMoney = 0;
        for(int i = 0; i < m; i++){
            ll cost = months[i].first;
            ll happiness = months[i].second;
            //you need to go thru all happinesses that u can reach and update their DP value
            for(int j = dp.size(); j >= happiness; j--){
                if(dp[j-happiness] != -1 && dp[j-happiness] + cost <= amtOfMoney){
                    if(dp[j]!=-1){
                        
                    dp[j] = min(dp[j], dp[j-happiness] + cost);
                    }else{
                        dp[j] = dp[j-happiness] + cost;
                    }
                }
            }
            
            amtOfMoney+=x;
        }
        for(int i = sumOfHappiness; i >=0; i--){
            if(dp[i] !=-1){
                cout<<i<<endl;
                break;
            
            }
        }

    }
}