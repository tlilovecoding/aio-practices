#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n, k;
        vector<int> chests;
        vector<int> preCoinsEarnt(n+1, 0);
        for(int i = 0; i < n; i++){
            int w; cin>>w;
            chests.push_back(w);
            preCoinsEarnt[i+1] = preCoinsEarnt[i] + w; 
        }
        for(int i = 0; i <=n; i++){
            //this is the last one that will be a part of the good sequence.
            int spent = k*(i);
            int good = preCoinsEarnt[i];
            int bad = (preCoinsEarnt[])
        }
    }


}