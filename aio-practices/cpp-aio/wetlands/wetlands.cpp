#include <bits/stdc++.h>
using namespace std;
int amt[8];

int main(){
    ifstream fin ("wetin.txt");
    ofstream fout ("wetout.txt");
    for(int i = 0; i < 8; i++){
        fin>>amt[i];
    }
    int runningSum = 0;
    for(int i = 0; i < 8; i++){
        runningSum+=amt[i];
        if(runningSum>10){
            runningSum-=10;
        }else{
            runningSum = 0;
        }
    }

    fout<<runningSum;


}