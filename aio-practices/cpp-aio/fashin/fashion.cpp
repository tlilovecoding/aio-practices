#include <bits/stdc++.h>
using namespace std;
int target;
int main(){
    ifstream fin ("fashin.txt");
    ofstream fout("fashout.txt");
    int ans = 0;
    fin>>target;
    while(target>=100){
        ans+=1;
        target-=100;
    }
    while(target>=20){
        ans+=1;
        target-=20;
    }
    while(target>=5){
        ans+=1;
        target -=5;
    }
    while(target>0){
        target -=1;
        ans+=1;
    }
    fout<<ans;
}