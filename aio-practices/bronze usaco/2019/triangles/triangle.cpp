#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n; cin>>n;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++){
        int x, y; cin>>x>>y;
        arr.push_back({x, y});
    }
    //we need two x-same and two y-same
    int maximum_area = 0;
    for(int i = 0; i < n; i++){
        int x1 = arr[i].first; int y1 = arr[i].second;
        for(int j = 0; j < n; j++){
            int x2 = arr[j].first;int y2=arr[j].second;
            for(int w = 0; w < n; w++){
                int x3 = arr[w].first; int y3 = arr[w].second;
                if(x1 == x2 && y1 == y3){
                    int area = abs((y1-y2)) * abs(x3-x1);
                    maximum_area = max(area, maximum_area);
                }
            }
        }
    }
    cout<<maximum_area;
}