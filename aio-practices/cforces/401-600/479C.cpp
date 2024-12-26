#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<pair<long long, long long>> ab(n);
    for(int i = 0; i < n; i++){
        cin>>ab[i].first>>ab[i].second;
    }
    sort(ab.begin(), ab.end(), [](const pair<long long, long long>&a, const pair<long long, long long> &b){
        if(a.first != b.first){
            return a.first < b.first;}
        else{
            return a.second < b.second;
        }
    });
    long long currPeriod = min(ab[0].first, ab[0].second);
    for(int i = 1; i < n; i++){
        if(ab[i].second >= currPeriod){
            currPeriod = ab[i].second;
        }else{
            currPeriod = ab[i].first;
        }
    }
    cout<<currPeriod;
}