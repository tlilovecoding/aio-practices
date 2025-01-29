#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> seq;
        long long initialSum = 0;
        for(long long i = 0; i < n; i++){
            char k; cin>>k;
            if(k == 'R'){
                seq.push_back(0);
                initialSum+=(n-i-1);
            }else{
                seq.push_back(1);
                initialSum+=i;
            }
        }
        vector<long long> original = seq;
        sort(seq.begin(), seq.end());

        vector<long long> changes;
        for(long long i = 0; i < n; i++){
            if(original[i] != seq[i]){
                if(original[i] == 0){
                    changes.push_back(abs(n-2*i-1));
                }else{
                    changes.push_back(abs(2*i-1-n));
                }
            }
        }
        sort(changes.begin(), changes.end(), greater<>());
        while(changes.size() < n){
            changes.push_back(0);
        }

        vector<long long> ans;
        long long prevSum = initialSum;
        for(long long i = 0; i < n; i++){
            ans.push_back(changes[i] + prevSum);
            prevSum += changes[i];
        }
        for(long long i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
