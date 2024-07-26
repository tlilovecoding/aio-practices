#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int computed_value = (n - 1) / 2;
    cout << computed_value << endl;
    sort(arr.begin(), arr.end());
    for(int i = 1; i < n; i += 2){
        swap(arr[i], arr[i - 1]);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}