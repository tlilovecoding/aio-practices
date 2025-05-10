#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin>>n>>x;
    vector<long long> values;
    for(int i = 0; i < n; i++){
        long long w; cin>>w;
        values.push_back(w);
    }
    int l = 0, r = 0;
    int ans = 0;
    long long curr = values[0];
    while(r<n){
        if(curr == x){
            ans++;
            curr-=values[l];
            l++;

            if(r!=n-1){
                r++;
                curr+=values[r];
            }else{
                break;
            }
        }else if(curr > x){
            curr-=values[l];
            l++;
        }else{
            if(r!=n-1){
                r++;
                curr+=values[r];
            }
            else{
                break;
            }
        }
        if(l>r){
            if(r!=n-1){

                r++;
                curr+=values[r];
            }else{
                break;
            }
        }
    }
    cout<<ans;
}