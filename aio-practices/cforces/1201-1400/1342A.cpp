#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        if (x < y) {
            swap(x, y);
        }
        long long a, b; 
        cin >> a >> b;
        cout<<min(y*b + (x-y)*a, (x+y)*a)<<endl;
    }
    return 0;
}
