#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        map<ll, int> values;
        for (int i = 0; i < n; i++) {
            ll w; 
            cin >> w;
            values[w]++;
        }

        vector<ll> sides;
        for (auto &[value, freq] : values) {
            while (freq >= 2) {
                sides.push_back(value);
                freq -= 2;
            }
        }
        bool ok = true;
        if (sides.size() < 4) {
            cout << "NO" << endl;
            ok = false;
        }

        sort(sides.begin(), sides.end());
        if(ok == true){

        ll smallestX = sides[0];
        ll smallestY = sides[1];
        ll largestX = sides[sides.size() - 2];
        ll largestY = sides[sides.size() - 1];
        cout<<"YES"<<endl<<smallestX<<" "<<smallestY<<" "<<smallestX<<" "<<largestY<<" "<<largestX<<" "<<largestY<<" "<<largestX<<" "<<smallestY<<endl;
        }
    }
    return 0;
}