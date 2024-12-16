#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<int> prices;
    for(int i = 0; i < n; i++){
        int j; cin>>j;
        prices.push_back(j);
    }
    sort(prices.begin(), prices.end());
    int ans = 0;
    for(int i = 0; i < m; i++){
        if(prices[i] < 0){
            ans+= (-(prices[i]));
        }else{
            break;
        }
    }
    cout<<ans;
}