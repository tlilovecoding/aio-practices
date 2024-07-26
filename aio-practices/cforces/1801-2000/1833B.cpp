#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n; cin>>n;
        int k; cin>>k;
        vector<pair<int, int>> forecastedTemp(n);
        vector<int> actualTemp(n);
        int ans[n];
        for(int i = 0; i < n; i++){
            cin>>forecastedTemp[i].first;
            forecastedTemp[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin>>actualTemp[i];
        }
        sort(actualTemp.begin(), actualTemp.end());
        sort(forecastedTemp.begin(), forecastedTemp.end());
        for(int i = 0; i < n; i++){
            ans[forecastedTemp[i].second] = actualTemp[i];
        }
        for(int i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}