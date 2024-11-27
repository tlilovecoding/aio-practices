#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n; cin>>n;
    vector<set<string>> features(n);
    for(int i = 0; i < n; i++){
        string a; int b;
        cin>>a>>b;
        for(int j = 0; j < b; j++){
            string w; cin>>w;
            features[i].insert(w);
        }
    }

    //for each set, for each attribute check if it is present in any other animal. 
    //if it is, then add one to its overall count. 
    //if there is a leftover in the overall count 
    //(feature that is specific, i.e. overall count < length of the set)
    //then add one to it.
    // max of overall count>> 
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int w = i+1; w < n; w++){
            int curr = 0;
            for(auto k : features[i]){
                if(features[w].count(k)){
                    curr++;
                }
            }
            ans = max(curr, ans);
        }
        }
        cout<<ans+1;
    }