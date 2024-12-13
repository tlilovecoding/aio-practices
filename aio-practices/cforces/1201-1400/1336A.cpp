#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b; 
    cin >> a >> b;
    long long mini = min(a, b);
    mini = min(mini, (a + b) / 3); // No need for floor here
    cout << mini << endl;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
