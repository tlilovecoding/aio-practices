#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; int t;
    cin>>n>>t;
    string w; cin>>w;
    while(t--){
        for(int i = 0; i < n; i++){
            if(w[i] == 'B' && w[i+1] =='G'){
                w[i] = 'G';
                w[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<w;
}