#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n; cin>>n;
    vector<int> people_on_duty(1000, 0);
    vector<pair<int, int>> lifeguards;
    int covered = 0;
    for(int i = 0; i < n; i++){
        int x, y; 
        cin>>x>>y;
        lifeguards.push_back({x, y});
        for(int j = x; j < y; j++){
            if(people_on_duty[j]==0){
                covered++;
            }
            people_on_duty[j]++;
        }
    }
    int minimumOff = 1e6;
    for(int i  = 0; i < n; i++){
        int curr = 0;
        for(int j = lifeguards[i].first; j < lifeguards[i].second; j++){
            if(people_on_duty[j] == 1){
                curr++;
            }
        }
        minimumOff = min(minimumOff, curr);
    }
    cout<<covered-minimumOff;

}