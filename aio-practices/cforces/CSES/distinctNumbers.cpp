#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n; cin>>n;
 
    set<long long> j;
 
    for(int i = 0; i < n; i++){
 
        long long w; cin>>w;
 
        j.insert(w);
 
    }
 
    cout<<j.size()<<endl;
}