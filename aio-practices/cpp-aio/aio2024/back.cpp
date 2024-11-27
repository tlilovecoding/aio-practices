#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("backin.txt");
    ofstream fout("backout.txt");
    int n; int k;
    vector<int> distanceFromFront;
    vector<int> costs;
    fin>>n>>k;
    int currsum = 0;
    distanceFromFront.push_back(0);
    for(int i =0; i < n-1; i++){
        int x; fin>>x;
        currsum+=x;
        distanceFromFront.push_back(currsum);
    }
    for(int i = 0; i < n; i++){
        int w; fin>>w;
        costs.push_back(w);
    }
    int currCans = 0;
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(distanceFromFront[n-1] - distanceFromFront[i] <= currCans){
            break;
        }else{
            ans+=costs[i]*min(distanceFromFront[n-1] - distanceFromFront[i]-currCans, k-currCans);
            currCans+=min(distanceFromFront[n-1] - distanceFromFront[i]-currCans, k-currCans);
            currCans-=(distanceFromFront[i+1]-distanceFromFront[i]);
            cout<<"current cans: "<<currCans;
            cout<<"current answer: "<<ans;
        }
    }
    fout<<ans;
}