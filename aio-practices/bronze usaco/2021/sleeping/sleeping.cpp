#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> times(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>times[i];
            sum+=times[i];
        }
        if(sum == 0){
            cout<<0<<endl;
            continue;
        }
        int ans;
        for(int i = 0; i <= sum; i++){
            if(i!=0 && sum%i !=0 ){
                continue;
            }

            int curr = 0;
            bool broken = false;
            for(int j = 0; j < n; j++){
                curr+=times[j];
                if(curr==i){
                    curr = 0;
                }else if(curr > i){
                    broken = true;
                    break;
                }
            }
            if(!broken){
                ans = n - sum/i;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
}