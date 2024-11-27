#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("backin.txt");
    ofstream fout("backout.txt");
    int n; int k;
    vector<int> distanceFromFront;
    vector<int> costs;
    vector<pair<int, int>> distanceToCheaperTown;
    int currentSum = 0;
    distanceFromFront.push_back(0);
    for(int i = 0; i < n; i++){
        int x; fin>>x;
        currentSum+=x;
        distanceFromFront.push_back(currentSum);
    }
    int currDistance = 0;
    int x; fin>>x; 
    costs.push_back(x);
    int minimumCost = costs[0];
    for(int i = 1; i < n; i++){
        int w; fin>>w;
        currDistance+=(distanceFromFront[i]-distanceFromFront[distanceToCheaperTown]);
        if(w<minimumCost){
            distanceToCheaperTown.push_back({currDistance, i});
            minimumCost = w;
            currDistance = 0;
        }
        costs.push_back(w);
    }
    for(int i = 0; i < distanceToCheaperTown.size(); i++){
        cout<<distanceToCheaperTown[i].first;
    }
}