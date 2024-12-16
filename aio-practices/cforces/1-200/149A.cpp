#include <bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>>k;
    vector<int> months;
    for(int i = 0; i < 12; i++){
        int w; cin>>w;
        months.push_back(w);
    }
    sort(months.begin(), months.end(), greater<>());
    int currSum = 0;
    for(int i = 0; i < 12; i++){
        if(currSum >= k){
            cout<<i;
            return 0;
        }else{
            currSum+=months[i];
        }
    }
    if(currSum < k){
        cout<<-1;
    }else{
        cout<<12;
    }
}