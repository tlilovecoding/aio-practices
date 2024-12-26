#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> count(26, 0);
    for(int i = 0; i < n; i++){
        char c; cin>>c;;
        count[c - 'A']++;
    }
    sort(count.begin(), count.end(), greater<int>());
    long long ans = 0;
    for(int i = 0; i < 26; i++){
        if(k==0){
            break;
        }else{
            if(count[i]>=k){
                ans+=k*k;
                k = 0;
            }else{
                ans+=count[i]*count[i];
                k-=count[i];
            }
        }
    }
    cout<<ans<<endl;

}