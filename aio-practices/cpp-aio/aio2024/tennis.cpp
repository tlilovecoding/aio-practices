#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("tennisin.txt");
    ofstream fout("tennisout.txt");
    vector<int> numberOfBalls;
    vector<int> copy;
    vector<pair<int, int>> instructions;
    int n, m; fin>>n>>m;
    for(int i = 0; i < n; i++){
        int x; fin>>x;
        numberOfBalls.push_back(x);
        copy.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int j, k; fin>>j>>k;
        instructions.push_back({j, k});
    }
    int ans = 0;
    cout<<numberOfBalls[2];
    for(int i = 0; i < m; i++){
        if(numberOfBalls[instructions[i].first-1]>0){
            numberOfBalls[instructions[i].first-1]-=1;
            numberOfBalls[instructions[i].second-1]+=1;
            ans++;
            for(int j = 0; j < n; j++){
                cout<<numberOfBalls[j]<<" ";
            }
        }else{
            fout<<ans;
            cout<<instructions[i].first-1;
            cout<<numberOfBalls[2];
            cout<<"Ended";
            return 0;
        }
    bool evs = true;
    for(int i = 0; i < n; i++){
        if(numberOfBalls[i] == copy[i]){
            continue;
        }else{
            evs = false;
            break;
        }
    }
    if(evs){
        fout<<"FOREVER";
        return 0;
    }
    bool w = true;
    while(w){
        for(int i = 0; i < m; i++){
            if(numberOfBalls[instructions[i].first-1]>0){
                numberOfBalls[instructions[i].first-1]--;
                numberOfBalls[instructions[i].second-1]++;
                ans++;
            }else{
                fout<<ans;
                w = false;
            }
        }
    }
}
}