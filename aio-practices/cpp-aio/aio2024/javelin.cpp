#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("javelin.txt");
    ofstream fout("javelout.txt");
    int n, d; 
    int currentMaxLength = 0;
    int ans = 0;
    fin>>n;
    for(int i = 0; i < n; i++){
        int w; fin>>w;
        if(w>currentMaxLength){
            currentMaxLength = w;
            ans++;
        }
        
    }
    fout<<ans;
}