#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int worms[n];
    int runningSum = 0;
    for(int i = 0; i < n; i++){
        int x; cin>>x;
        runningSum += x;
        worms[i] = runningSum;
        //cout<<worms[i]<<endl;
        // 2 9 12 16 25
    }
    int q; cin>>q;
    for(int i = 0; i < q; i++){
        int needed; cin>>needed;
        int l = 0, r = n-1, ans = 0;
        while(l <=r){
            int mid = (l + r)/2;
            if(worms[mid]>=needed){
                r = mid - 1;
                ans = mid;
            }else{
                l = mid + 1;
            }
        }
        cout<<ans + 1<<endl;
    }
}
