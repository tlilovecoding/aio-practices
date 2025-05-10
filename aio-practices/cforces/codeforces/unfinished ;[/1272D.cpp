#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int w;
        arr.push_back(w);
    }
    vector<vector<int>> dp(2, vector<int>(n, 0));
    dp[0][0] = 1;
    dp[1][0] = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            dp[0][i] = dp[0][i-1] + 1;
            dp[1][i] = dp[1][i-1] + 1;
        }
    }
}