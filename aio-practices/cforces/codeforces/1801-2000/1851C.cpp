#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int>  arr;
        for(int i = 0; i < n; i++){
            int j; cin>>j;
            arr.push_back(j);
        }
        int first = arr[0];
        int last = arr[n-1];
        if(first == last){
            int cnt = count(arr.begin(), arr.end(), first);
            if(cnt>= k){
                cout<<"YES"<<endl;
                continue;
            }else{
                cout<<"NO"<<endl;
                continue;
            }
        }else{
            int first_cnt = 0;
            int last_cnt = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == first && first_cnt < k){
                    first_cnt++;
                }else if(arr[i] == last && last_cnt < k && first_cnt >= k){
                    last_cnt++;
                }
            }
            if(first_cnt == k && last_cnt == k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

}