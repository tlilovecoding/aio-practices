#include <bits/stdc++.h>
using namespace std;
int H;
int N;
int temps[100000];
int main(){
    ifstream fin ("heatin.txt");
    ofstream fout ("heatout.txt");
    fin>>N>>H;
    for(int i = 0; i < N; i++){
        fin >>temps[i];
    }
    int lastHotDay = -1;
    int ans = 0;
    for(int day = 0; day < N; day++){
        if(temps[day]>=H && lastHotDay == -1){
            lastHotDay = day;
            ans = max(ans, 1);
        }else if (temps[day] >= H && lastHotDay != -1){
            ans = max(ans, day - lastHotDay+1);
        }else{
            lastHotDay = -1;
        }
    }
    fout<<ans;
} 