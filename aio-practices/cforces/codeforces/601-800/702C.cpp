#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<long long> cities;
    vector<long long> towers;
    for(int i = 0; i< n; i++){
        long long w; cin>>w;
        cities.push_back(w);
    }
    for(int i = 0; i < m; i++){
        long long w; cin>>w;
        towers.push_back(w);
    }
    int ptr1 = 0, ptr2 = 0;
    long long ans = 0;
    long long curr = 0;
    while(ptr1 < n){
        long long curr = 0;
        if(towers[ptr2] > cities[ptr1]){
            if(ptr2 !=0){
                curr = min(abs(towers[ptr2] - cities[ptr1]), abs(cities[ptr1] - towers[ptr2-1]));
                ptr1++;
            }else{
                curr = abs(towers[ptr2] - cities[ptr1]);
                ptr1++;
            }
        }else{
            curr = abs(cities[ptr1] - towers[ptr2]);
            while(towers[ptr2] <= cities[ptr1] && ptr2 < m-1){
                ptr2++;
                curr = min(abs(towers[ptr2] - cities[ptr1]), curr);
            }
            ptr1++;
        }
        ans = max(curr, ans);
    }
    cout<<ans;

}