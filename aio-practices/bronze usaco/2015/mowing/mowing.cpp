#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    int n; cin>>n;
    vector<pair<char, int>> directions;
    //directions: [[direction, distance]]
    for(int i = 0; i < n; i++){
        char d; int s;
        cin>>d>>s;
        directions.push_back({d, s});
    }
    int minimum = 1e9;
    map<pair<int, int>, int> positions;
    pair<int, int> currentPosition({0,0});
    int t = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < directions[i].second; j++){
            t++;
            if(directions[i].first == 'N'){
                currentPosition.second ++;
            }
            else if(directions[i].first == 'S'){
                currentPosition.second--;
            }else if(directions[i].first == 'E'){
                currentPosition.first++;
            }else{
                currentPosition.first--;
            }
            if(positions.count({currentPosition.first, currentPosition.second})){
                minimum = min(minimum, t- positions[{currentPosition.first, currentPosition.second}]);
            }
            positions[{currentPosition.first, currentPosition.second}] = t;
        }

    }
    cout<<(minimum == 1e9 ? -1 : minimum);
}