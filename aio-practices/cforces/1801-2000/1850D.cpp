#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        //find max groupings
        int n, k; cin>>n>>k;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            int x; cin>>x;
            nums.push_back(x);
        }
        sort(nums.begin(), nums.end());
        int cD = 1;
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            if(nums[i] + k >= nums[i+1]){
                cD++;
            }else{
                ans = max(ans, cD);
                cD = 1;
            }
        }
        ans = max(ans, cD);
        cout<<n - ans<<endl;
    }
}