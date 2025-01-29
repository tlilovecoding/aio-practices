#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t; // long long for number of test cases
    while(t--){
        long long n; cin >> n; // long long for size of the array
        vector<long long> oA; // Vector for storing the input array
        vector<long long> prefix; // Vector for storing prefix sums
        long long currsum = 0; // To calculate the prefix sum
        
        for(long long i = 0; i < n; i++){
            long long j; cin >> j; // long long for array elements
            oA.push_back(j);
            currsum += j;
            prefix.push_back(currsum);
        }

        vector<char> lrs; // Vector for storing 'L' and 'R' characters
        for(long long i = 0; i < n; i++){
            char k; cin >> k; // Input character
            lrs.push_back(k);
        }

        long long ans = 0;
        long long lP = 0; 
        long long rP = n - 1;
        
        while(lP < rP){
            if(lrs[lP] == 'L' && lrs[rP] == 'R'){
                ans += prefix[rP] - prefix[lP] + oA[lP];
                lP++;
                rP--;
            } else {
                if(lrs[rP] == 'L'){
                    rP--;
                }
                if(lrs[lP] == 'R'){
                    lP++;
                }
            }
        }
        cout << ans << endl; // Print the result
    }
}
