#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("snapin.txt", "r", stdin);
    freopen("snapout.txt", "w", stdout);
    int r, s;
    cin>>r>>s;
    vector<int> rose(1e5, 0);
    vector<int> scarlet(1e5, 0);
    for(int i = 0; i < r; i++){
        int x; cin>>x;
        rose[x]++;
    }
    for(int i = 0; i < s; i++){
        int x; cin>>x; scarlet[x]++;
    }
    int ans = 0;
    for(int i = 0; i < 1e5; i++){
        if(scarlet[i]!=0&&rose[i]!=0){
            ans+=scarlet[i]*rose[i];
        }
    }
    cout<<ans;

}