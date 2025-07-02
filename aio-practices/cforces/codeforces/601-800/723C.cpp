/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m; cin>>n>>m;
    vector<ll> songs;
    vector<ll> indexesForChange;
    map<int, ll> frequencies;
    ll maxOccurenceOfWanted = 0;
    int needToBeOp = 0;
    for(int i = 0; i < n; i++){
        ll w; cin>>w;
        songs.push_back(w);
        if(w>m){
            needToBeOp++;
            indexesForChange.push_back(i);
        }else{
            frequencies[w]++;
        }
    }
    for(int i = 1; i <=m; i++){
        if(!frequencies[i]){

        frequencies[i] = 0;
        }
    }

    int initialNeedToBe = needToBeOp;
    for(auto [key, value]: frequencies){
        maxOccurenceOfWanted = max(maxOccurenceOfWanted, value);
    }
    while(needToBeOp>0){
        auto it = frequencies.begin();
        int lowestKey = it->first;
        ll freq = it->second;
        if(freq == maxOccurenceOfWanted){
            if(needToBeOp < m){
                break;
            }else{
                maxOccurenceOfWanted++;
            }
        }    
            songs[indexesForChange[needToBeOp-1]] = lowestKey;
            frequencies[lowestKey]++;
            needToBeOp--;
    }
    auto it = frequencies.begin();
    int maxMin = it-> first;
    cout<<maxMin<<" "<<initialNeedToBe - needToBeOp<<endl;
    for(int i = 0; i < n; i++){
        cout<<songs[i]<<" ";
    }


}*/



//new approach *sigh*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m; cin>>n>>m;
    vector<ll> songs;
    map<ll, int> frequency;
    for(int i = 0; i < n; i++){
        ll w; cin>>w;
        songs.push_back(w);
        if(w <= m){
            frequency[w]++;
        }
    }
    int minMax = floor(n/m);
    for(int i = 1; i <= m; i++){
        if(!frequency[i]){
            frequency[i] = 0;
        }
    }
    queue<int> excessIndex;
    for(int i = 0; i < n; i++){
        if(songs[i]>m || frequency[songs[i]] > minMax){
            if(songs[i]<=m){
                
            frequency[songs[i]]--;
            }
            excessIndex.push(i);
        }
    }
    int changed = 0;
    /*
    for(int i = 0; i < n; i++){
        if(songs[i] <=m && frequency[songs[i]] < minMax){
            if(excessIndex.empty()){
                break;
            }
            int front = excessIndex.front();
            songs[front] = songs[i];
            frequency[songs[i]]++;
            excessIndex.pop();
            changed++;
        }
    }
    */
   for(int i = 1; i <=m; i++){
    while(frequency[i] < minMax){
        int front = excessIndex.front();
        songs[front] = i;
        frequency[i]++;
        excessIndex.pop();
        changed++;
    }
   }
    
    cout<<minMax<<" "<<changed<<endl;
    for(int i = 0; i < n; i++){
        cout<<songs[i]<<" ";
    }
}