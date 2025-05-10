#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string str; cin>>str;
    map<char, int> seen;
    set<char> chars;
    for(int i = 0; i < n; i++){
        chars.insert(str[i]);
    }
    int numberUnique = chars.size();
    int l = 0, r = 0;
    int ans = INT_MAX;
    int numberIncluded = 0;
    while(r<n){
        if(seen[str[r]] == 0){
            numberIncluded++;
        }
        seen[str[r]]++;
        while(numberIncluded == numberUnique){
            ans = min(ans, r - l + 1);
            seen[str[l]]--;
            if(seen[str[l]] == 0){
                numberIncluded--;
            }
            l++;
        }
        r++;
    }
    cout<<ans;
}