#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    vector<long long> tuitions;
    for(long long i = 0; i < n; i++){
        long long w; cin>>w;
        tuitions.push_back(w);
    }
    sort(tuitions.begin(), tuitions.end());
    //1 4 6 6
    long long maxa = 0;
    long long number = 0;
    for(long long i = 0; i < n; i++){
        long long curr = tuitions[i]*(n-i);
        if(curr > maxa){
            maxa = curr;
            number = tuitions[i];
        }
    }
    cout<<maxa<<" "<<number;
}