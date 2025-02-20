#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int ans = 0;
    vector<long long> nums;
    for(int i = 0; i < n; i++){
        long long curr; cin>>curr;
        nums.push_back(curr);
    }
    multiset<long long> towers;
    for(int i = 0; i < n; i++){
        auto it = towers.upper_bound(nums[i]);
        if(it != towers.end()){
            towers.erase(it);
        
        }
        towers.insert(nums[i]);

    }

    cout<<towers.size();
}