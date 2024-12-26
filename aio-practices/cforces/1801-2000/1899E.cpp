#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long minElement = min_element(arr.begin(), arr.end()) - arr.begin();
        bool ok = true;
        for(int i = minElement+1; i < n; i++){
            if(arr[i] < arr[i-1]){
                cout<<-1<<endl;
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout<<minElement<<endl;
        }
    }
}
