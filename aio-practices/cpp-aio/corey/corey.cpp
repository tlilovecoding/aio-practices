#include <bits/stdc++.h>
using namespace std;
#define MAX_N 1010
 
int friendCount[MAX_N];
int numGood;
bool bad[MAX_N];
//bool good = true;
vector<int> adj[MAX_N];
 
int main(){
    freopen("partyin.txt","r",stdin);
    freopen("partyout.txt","w",stdout);
    int N,M,A,B;
    scanf("%d %d %d %d",&N,&M,&A,&B);
    numGood = N;
    for(int i=0;i<M;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=N;i++) friendCount[i] = (int)adj[i].size();
    while(true){
        bool good = true;
        for(int i=1;i<=N;i++){
            if (!bad[i]){
                if (friendCount[i] < A || numGood-friendCount[i]-1 < B){
                    bad[i] = true;
                    numGood--;
                    good = false;
                    for(auto a : adj[i]){
                        friendCount[a]--;
                    }
                }
            }
        }
        if (good) break;
    }
 
    printf("%d",numGood);
 
    return 0;
}