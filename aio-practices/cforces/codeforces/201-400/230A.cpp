#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int s;
    cin>>s>>n;
    vector<pair<int,int>> dragons;
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x;
        cin>>y;
        dragons.push_back({x, y});
    }
    sort(dragons.begin(), dragons.end());
    bool canDefeatAll = true;
    for(int i = 0; i < n; i++){
        if(s>dragons[i].first){
            s+=dragons[i].second;
        }else{
            canDefeatAll = false;
            break;
        }
    }
    if(canDefeatAll){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}