#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m; cin>>x>>y>>m;
    int maximum = 0;
    int current = 0;
    for(int i = 0; i*x < m; i++){
        current = i*x + floor((m-i*x)/y)*y;
        maximum= max(current, maximum);
    }
    cout<<maximum;
}