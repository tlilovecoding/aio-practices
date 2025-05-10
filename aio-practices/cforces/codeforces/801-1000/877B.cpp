#include <bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    int n = str.size();
    vector<int> firstmod(n+1, 0);
    vector<int> secondmod(n+1, 0);
    for(int i = 1; i <= str.size(); i++){
        if(str[i-1] == 'a'){
            firstmod[i] = firstmod[i-1]+1;
        }else{
            firstmod[i] = firstmod[i-1];
        }
    }
    for(int i = 1; i <= str.size(); i++){
        if(str[i-1] == 'b'){
            secondmod[i] = secondmod[i-1] + 1;
        }else{
            secondmod[i] = secondmod[i-1];
        }
    }
    //prefix sums, so should subtract
    //0 1 2 2
    // 1 1 1 2
    // 2 2 1 0
    int ans = 0;
    for(int i = 0; i <= n; i++){
        for(int j = i; j <= n; j++){
            int lengthOfString = firstmod[i] + (secondmod[j] - secondmod[i]) + (firstmod[n] - firstmod[j]);
            ans = max(lengthOfString, ans);
        }
    }
    cout<<ans;
}