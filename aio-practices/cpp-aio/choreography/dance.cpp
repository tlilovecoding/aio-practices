#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("dancein.txt");
    ofstream fout("danceout.txt");
    int d; fin>>d;
    vector<int> numberOfHoops(d+5, 0);
    int t; fin>>t;
    int ans = 0;
    for(int i = 0; i < t; i++){
        int thrower, dancer; fin>>thrower>>dancer;
        if(numberOfHoops[thrower]==0){
            ans++;
            numberOfHoops[thrower] = 1;
        }
        numberOfHoops[thrower]--;
        numberOfHoops[dancer]++;
    }
    fout<<ans;
}