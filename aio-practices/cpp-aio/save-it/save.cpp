#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; 
    int remainders[6] = {0, 0, 0, 0, 0, 0};
    ifstream fin("savein.txt");
    ofstream fout("saveout.txt");
    fin>>N;
    int ans = 0;
    for(int i = 0; i < N; i++){
        int x; fin>>x;
        ans+=x;
        remainders[x%5]++;
    }
    ans = ans - remainders[1] - 2*remainders[2];
    while(remainders[3]>0 && remainders[4]>0){
        remainders[3]--;
        remainders[4]--;
        ans-=2;
    }
    while(remainders[3]>=4){
        ans-=2;
        remainders[3]-=4;
    }while(remainders[3]>=2){
        ans--;
        remainders[3]-=2;
    }while(remainders[4]>=3){
        ans-=2;
        remainders[4]-=3;
    }
    while(remainders[3]){
        ans+=2;
        remainders[3]--;
    }
    while(remainders[4]){
        ans+=1;
        remainders[4]--;
    }
    fout<<ans;
}