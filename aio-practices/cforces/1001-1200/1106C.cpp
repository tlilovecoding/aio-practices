#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    sort(nums, nums+n);
    long long sum = 0;
    int l = 0; int r = n-1;
    while(l<r){
        sum+=((nums[l]+nums[r])*(nums[l]+nums[r]));
        l++; r--;
    }
    cout<<sum;
}