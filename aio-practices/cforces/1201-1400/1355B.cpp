#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> experience;
        for(int i = 0; i < n; i++){
            int w; cin>>w;
            experience.push_back(w);
        }
        sort(experience.begin(), experience.end());
        int ans = 0;
        int curr = 0;
        int amtNeeded = 0;
        for(int i = 0; i < n; i++){
            amtNeeded = experience[i];
            curr++;
            if(amtNeeded <= curr){
                ans++;
                amtNeeded = 0;
                curr = 0;
            }
        }
        cout<<ans<<endl;

    }
}