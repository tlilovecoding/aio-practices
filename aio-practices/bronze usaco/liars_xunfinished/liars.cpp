#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> less;
    vector<int> more;
    int minimum = INT_MAX;
    int maximum = 0;
    int ans = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        char a; int b;
        cin>>a>>b;
        if(a == 'L'){
            less.push_back(b);
            minimum = min(minimum, b);

        }else{
            more.push_back(b);
            maximum = max(b, maximum);
        }
    }
    sort(less.begin(), less.end(), greater<int>());
    sort(more.begin(), more.end());
    for(int i = (minimum!= INT_MAX? minimum : 0); i <= maximum; i++){
        int curr = 0;
        for(int j = 0; j < less.size(); j++){
            if(less[j]<i){
                curr+=(less.size()-j);
                break;
                // 6 5 4 3 2 1
            }
        }
        for(int w = 0; w < more.size(); w++){
            if(more[w]>i){
                curr+=(more.size()-w);
                break;
            }
            
        }
        ans = max(curr, ans);
    }
    cout<<ans;

}