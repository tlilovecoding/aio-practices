#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //same thing as number of subarrays - number of zero sums (jasper problem ahh)
    int n; cin>>n;
    vector<ll> elements(n);
    vector<ll> prefix(n+1);
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        cin>>elements[i];
        prefix[i+1] = prefix[i] + elements[i];
    }
    //hash map to store where the last time tghe ame element was found? 
    //if l's rightmost thing (the farthest an elemnt can be stretched) is r, then l+1 is at least r too.
    //so just iterate through prefix trying to find the rs lol but it amortizes
    int r = 1;
    set<ll> currElements;
    currElements.insert(prefix[0]);
    ll sum = 0;
    for(int l = 0; l < n; l++){
        while(r<=n &&currElements.count(prefix[r]) == 0){
            
        //maybe not 0?
            currElements.insert(prefix[r]);
            r++;
            //indexing def wrongg
        }
        sum += r -1 - l;
        currElements.erase(prefix[l]);
    }
    cout<<sum;




}