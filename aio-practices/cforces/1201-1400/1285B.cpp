#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> nums;
        ll ySum = 0;
        for(int i = 0; i < n; i++){
            ll w; cin>>w;
            nums.push_back(w);
            ySum+=w;
        }
        //calculate, greedily, adel's sum
        ll maxA = nums[0];
        ll currSum = nums[0];
        for(int i = 1; i < n-1; i++){
                currSum = max(currSum + nums[i], nums[i]);
                maxA = max(maxA, currSum);
            //...
            
        }
        ll maxA2 = nums[1];
        ll currSum2 = nums[1];
        for(int i = 2; i < n; i++){
                currSum2 = max(currSum2 + nums[i], nums[i]);
                maxA2 = max(maxA, currSum2);
            //...
            
        }
        if(max(maxA, maxA2) < ySum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}