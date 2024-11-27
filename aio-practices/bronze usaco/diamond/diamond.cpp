#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k; cin>>n>>k;
    vector<int> diamonds;
    for(int i = 0; i < n; i++){
        int x; cin>>x;
        diamonds.push_back(x);
    }
    int ans = 0;
    sort(diamonds.begin(), diamonds.end());
    //1 1 3 4 6
    for(int i = 0; i < n; i++){
        //using this as a starting point
        int lowestNumber = diamonds[i];
        int count = 0;
        for(int j = i; j < n; j++){
            if(diamonds[j] - lowestNumber <=k){
                count++;
            }
        }
        ans = max(count, ans);
    }
    cout<<ans;

}