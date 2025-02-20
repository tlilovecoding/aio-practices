#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, t; cin>>n>>t;
    vector<long long> books;
    for(int i = 0; i < n; i++){
        long long j; cin>>j;
        books.push_back(j);
    }
    int l = 0;
    int r = 0;
    long long maximum =0;
    long long curr = 0;
    long long curr2 = 0;
    while(r < n){
        curr+=books[r];
        curr2++;
        if(curr > t){
            curr-=books[l];
            l++;
            curr2--;
        }else{
            maximum = max(curr2, maximum);
        }
        r++;
    }
    cout<<maximum<<endl;

}