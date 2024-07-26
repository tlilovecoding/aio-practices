#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long currSum = 0;
        int n;
        cin>>n;
        long long elements[n];
        for(int i = 0; i < n; i++){
            cin>>elements[i];
        }
        long long maxSoFar = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            maxSoFar = max(maxSoFar, elements[i]);
            currSum +=elements[i];
            if(currSum-maxSoFar == maxSoFar){
                ans++;
            }
        }
    cout<<ans<<endl;
    }
}