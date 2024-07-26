#include <bits/stdc++.h>
using namespace std;
int d;
int days[100001];
int main(){
    ifstream fin ("antsin.txt");
    ofstream fout ("antsout.txt");
    
    fin>>d;
    for(int i = 0; i < d; i++){
        fin>>days[i];
    }
    int beforeNum;
    int ans = 0;
    beforeNum = days[0];
    int lenreq = 1;
    for(int i = 1; i < d; i++){
        if(days[i]>beforeNum){
            lenreq++;
        }else{
            if(lenreq>=2) ans ++;
            lenreq = 1;
        }
        beforeNum = days[i];
    }
    if(lenreq>=2){
        ans++;
    }
    fout<<ans;
}