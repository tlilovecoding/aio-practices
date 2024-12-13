#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 51};
    for(int i = 0; i < primes.size(); i++){
        if(primes[i] == n){
            if(primes[i+1] == m){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
            break;
        }
    }
}