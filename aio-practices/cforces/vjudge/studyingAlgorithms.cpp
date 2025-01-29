#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin>>n>>x;
    vector<int> algorithms; 
    for(int i = 0; i < n; i++){
        int w; cin>>w;
        algorithms.push_back(w);
    }
    sort(algorithms.begin(), algorithms.end());
    int currTotal = 0;
    int cnt = 0;
    while(cnt < n){
        currTotal+=algorithms[cnt];
        if(currTotal <= x){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt;
}