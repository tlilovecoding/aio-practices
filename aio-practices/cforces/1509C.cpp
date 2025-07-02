#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 2e3 + 5; // Max size of the array (adjust as needed)

// Global arrays for memoization and input values
ll mem[MAX][MAX];
vector<ll> speeds;

ll dp(int l, int r){
    //uve put l min elements at the back and n - r max elements at the back.
    if(l==r){
        return 0;
    }else if(mem[l][r] != -1){
        return mem[l][r];
        //youve already calculated this range
    } 

    return mem[l][r] = speeds[r]-speeds[l] + min(dp(l+1, r), dp(l, r-1));
    //total discrepancy = curr descrepancy + descrepancy of optimized prefixes.
    //l - r is ur pool  of choices, or the prefix that ur building. then u contineu to add elements to the front

}

int main(){
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        ll s; cin>>s;
        speeds.push_back(s);
    }
    //basically, u can eitehr put the min of a subarray at a position or the max of it. if u look at the thing as a whole u def don't want the min thing to be 
    //affecting any of the ones from the beginning, cuz ull just eb adfding extra discrepancy.
    //this is also the same for the max
    //this actually happens at every point in the array
    //so u have to figure out which one to prioritise.
    //dp table that works out 
    sort(speeds.begin(), speeds.end());
    //dp mem table that represents the min discrepancy u can get up for a subarray
    memset(mem, -1, sizeof mem);
    cout<<dp(0, n-1)<<endl;

}