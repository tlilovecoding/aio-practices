#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("shopin.txt");
    ofstream fout("shopout.txt");
    int n, k; 
    fin>>n>>k;
    vector<int> items;
    for(int i = 0; i < n; i++){
        int x; fin>>x;
        items.push_back(x);
    }
    int starting = 0, end = n;
    int ans = 0;
    while(k>0){
        ans+=items[starting];
        starting++;
        end--;
        k--;
    }
    for(int i = starting+1; i < end; i+=2){
        ans+=items[i];
        cout<<items[i];
    }
    fout<<ans;
}