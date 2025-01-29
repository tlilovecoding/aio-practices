#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string w; cin>>w;
    int one = count(w.begin(), w.end(), '1');
    int zero = count(w.begin(), w.end(), '0');
    cout<<n - 2*min(one, zero);
}