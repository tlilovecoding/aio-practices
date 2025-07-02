#include <bits/stdc++.h>
using namespace std; 
int main(){
    int q; cin>>q;
    while(q--){
        int n, k; cin>>n>>k;
        string str; cin>>str;
        vector<string> strs({"RGB", "GBR", "BRG"});
        int ans = INT_MAX;
        for(int p = 0; p < 3; p++){
            string strsSequence = strs[p];
            string strNeeded = "";
            while(strNeeded.size() < n){
                strNeeded+=strsSequence;
            }
            strNeeded.resize(n);
            vector<int> needToChange(n, 0);
            for(int i = 0; i < n; i++){
                if(str[i] != strNeeded[i]){
                    needToChange[i] = 1;
                }
            }
            int curr = 0;
            for(int i = 0; i < k; i++){
                curr+=needToChange[i];
            }
            ans = min(ans, curr);
            for(int i = k; i < n; i++){
                curr-=needToChange[i-k];
                curr+=needToChange[i];
                ans = min(curr, ans);
            }
        }
        cout<<ans<<endl;        
    }
}