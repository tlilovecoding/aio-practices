#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> bar;
    for(int i = 0; i < n; i++){
        int j; cin>>j;
        bar.push_back(j);
    }
    int a = 0;
    int ares = 0;
    int atime = 0;
    int b = n-1;
    int bres = 0;
    int btime = 0;
    while(a<=b){
        if(atime < btime){
            atime+=bar[a];
            a++;
            ares++;
        }else if(btime < atime){
            btime+=bar[b];
            b--;
            bres++;
        }else if(btime == atime){
            if(a == b){
                atime+=bar[a];
                a++;
                ares++;
            }else{
                atime+=bar[a];
                a++;
                ares++;
                btime+=bar[b];
                b--;
                bres++;
            }
        }
    }
    cout<<ares<<" "<<bres;
}