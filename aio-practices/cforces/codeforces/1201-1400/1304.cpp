#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int q; cin>>q;
    while(q--){
        int n; 
        long long m;
        cin>>n>>m;
        vector<vector<ll>> customers(n, vector<ll>(3));
        for(ll i = 0; i < n; i++){
            ll t, l, h; cin>>t>>l>>h;
            customers[i][0] = t;
            customers[i][1] = l;
            customers[i][2] = h;

        }
        sort(customers.begin(), customers.end());  // sorts by time since it's the first element

        bool possible = true;
        //sort them based off the time that they come
         ll lowestTemperature = m;
         ll highestTemperature = m;
         ll currAmtTimeSpent = 0;
         for(int i = 0; i < n; i++){
            lowestTemperature = max(lowestTemperature-(customers[i][0] - currAmtTimeSpent), customers[i][1]);
            highestTemperature = min(highestTemperature + (customers[i][0] - currAmtTimeSpent), customers[i][2]);
            currAmtTimeSpent = customers[i][0];
            if(customers[i][1] > highestTemperature){
                possible = false;
                cout<<"NO"<<endl;
                break;
            }else if(lowestTemperature > customers[i][2]){
                possible = false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        
    }
}