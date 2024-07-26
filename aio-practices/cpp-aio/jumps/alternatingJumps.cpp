#include <bits/stdc++.h>
using namespace std;
int N;
int jumps[100005];
int blueSum = 0;
int redSum = 0;
int main(){
    cin >> N;
    for(int  i = 0; i < N; i++){
        int j;
        cin>> j;
        jumps[i] = j;
    }
    if(jumps[0] == 1){
        redSum = 1;
    }else{
        if(jumps[0]==0){
        blueSum = 1;
    }
    }for(int i = 1; i < N; i++){
        cout<<blueSum;
        cout<<redSum;
        if(jumps[i]==0){
            blueSum+=redSum;
        }else{
            redSum+=blueSum;
        }
    }
    if(redSum == 1 && blueSum == 0 || blueSum == 1&&redSum == 0){
        cout<<'0';
    }
    else{
        if(jumps[N=1]==1){
        cout<<blueSum%1000000007;
    }
    else{
        cout<<redSum%100000007;
    }
}
}