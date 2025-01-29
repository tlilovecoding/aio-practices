#include <bits/stdc++.h>
using namespace std;
int n, k;
int main(){
    cin>>n>>k;
    int timeLeft = 240-k;
    int cnt = 0;
    for(int i = 1; i < n+1; i++){
        if(timeLeft-5*(i)>=0){
            cnt++;
            timeLeft-=(5*i);
        }
        else{
            break;
        }
    }
    cout<<cnt;
}