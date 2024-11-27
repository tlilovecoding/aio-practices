#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k; cin>>n>>k;
    long long ans = 0;
    vector<long long> values;
    for(int i = 0; i < n; i++){
        long long x; cin>>x;
        values.push_back(x);
    }
    ans = 1 + k;
    for(long long i = 1; i < n; i++){
        if(values[i] - values[i-1] >= k+1){
            ans+=k+1;
        }else{
            ans+=(values[i]-values[i-1]);
        }
    }
    cout<<ans;
}