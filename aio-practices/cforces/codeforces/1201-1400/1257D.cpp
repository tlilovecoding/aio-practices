#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> monsters;
        for(int i  =0; i < n; i++){
            ll p; cin>>p;
            monsters.push_back(p);
        }
        int maxHeroS = -1;
        int m; cin>>m;
        vector<pair<ll, int>> heroes;
        for(int i = 0; i < m; i++){
            ll p; cin>>p;
            int s; cin>>s;
            heroes.push_back({p, s});

        }

        sort(heroes.begin(), heroes.end(), [](const pair<ll, int>& a, const pair<ll, int>& b) {
    return a.second < b.second;
});
        vector<ll> maxPowers(n+2, 0);
        for(auto& hero : heroes){
            ll p = hero.first;
            int s = hero.second;
            maxPowers[s] = max(maxPowers[s], p);    
        }
        for(int i = n; i > -1; i--){
            maxPowers[i] = max(maxPowers[i], maxPowers[i+1]);
        }

        int ans = 0;
        int i = 0;
        //i = the monster ur fighting
        while(i < n){
            int x = i;
            ll maxEncountered = 0;
            int bestLen = 0;
            while(x < monsters.size()){
                maxEncountered = max(maxEncountered, monsters[x]);
                int len = x - i  + 1;
                if(maxPowers[len] >= maxEncountered){
                    bestLen = len;
                    x++;
                }else{
                    break;
                }
            }
            if(bestLen == 0){
                cout<<-1<<endl;
                
                goto nextTestCase;
            }
            i+=bestLen;
            ans++;
        }
        cout<<ans<<endl;
        nextTestCase:;
    }
}