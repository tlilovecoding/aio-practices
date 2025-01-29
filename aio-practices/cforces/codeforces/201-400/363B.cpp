#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    int heights[n]; 
    for(int i = 0; i < n; i++){
        cin>>heights[i];
    }
    int minh = 301;
    int currh = 0;
    int currBestIdx = 0;
    for(int i = 0; i < k; i++){
        currh+=heights[i];
    }
    minh = currh;
    for(int i = k; i < n; i++){
        currh+=heights[i];
        currh-=heights[i-k];
        if (currh <= minh){
            minh = currh;
            currBestIdx = i - k + 1;
        }
    }
    cout<<currBestIdx + 1;
}