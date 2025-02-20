#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll> books;
    for(int i = 0; i < n; i++){
        ll w; cin>>w;
        books.push_back(w);
    }
    sort(books.begin(), books.end());
    ll sum = 0;
    for(int i = 0; i < n-1; i++){
        sum+=books[i];
    }
    if(sum < books[n-1]){
        cout<<books[n-1]*2;
    }else{
        cout<<sum+books[n-1];
    }
}