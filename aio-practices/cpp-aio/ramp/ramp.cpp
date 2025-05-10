#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> days;
    for(int i = 0; i < n; i++){
        int w; cin>>w;
        days.push_back(w);
    }
    int currMax = 1;
    int curr = 1;
    for(int i = 1; i < n; i++){
        if(days[i] - days[i-1] == 1){
            curr++;
            currMax = max(curr, currMax);
        }else{
            currMax = max(curr, currMax);
            curr = 1;
        }
    }
    cout<<currMax;
}