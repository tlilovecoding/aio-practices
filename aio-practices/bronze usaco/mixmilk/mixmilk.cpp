#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");
    vector<pair<int, int>> capacities(3);
    for(int i = 0; i < 3; i++){
        int a, b; fin>>a>>b;
        capacities[i].first = a;
        capacities[i].second = b;
    }
    int currBucket = 0; 
    for(int i = 0; i < 100; i++){
        int nextBucket = (currBucket + 1) % 3;
        if(capacities[currBucket].second <= capacities[nextBucket].first-capacities[nextBucket].second){
            capacities[nextBucket].second +=capacities[currBucket].second;
            capacities[currBucket].second = 0;
        }else{
            capacities[currBucket].second -= capacities[nextBucket].first-capacities[nextBucket].second;
            capacities[nextBucket].second = capacities[nextBucket].first;
        }
        currBucket = nextBucket;
    }
    for (int i = 0; i < 3; i++) {
        fout << capacities[i].second << '\n';
    }
}