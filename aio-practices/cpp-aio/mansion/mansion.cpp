#include <bits/stdc++.h>
using namespace std;
int N, K;
int houses[100000];
int main(){
    ifstream fin ("manin.txt");
    ofstream fout ("manout.txt");
    fin>>N>>K;
    int currsum = 0;
    int maxsum = 0;
    for(int i = 0; i < N; i++){
        fin>>houses[i];
        if(i<K){
            currsum+=houses[i];
        }
    }
    maxsum = currsum;
    for(int j = K; j < N; j++){
        currsum -= houses[j-K];
        currsum += houses[j];
        maxsum = max(currsum, maxsum);

    }
    fout<<maxsum;

}