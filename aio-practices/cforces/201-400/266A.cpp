#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string str; cin>>str;
    int ctr = 0;
    for(int i = 0; i < n-1; i++){
        if(str[i] == str[i+1]){
            ctr++;
        }
    }
    cout<<ctr;
}