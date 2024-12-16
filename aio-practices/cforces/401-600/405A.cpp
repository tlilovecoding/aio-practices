#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int j; cin>>j;
        nums.push_back(j);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
}