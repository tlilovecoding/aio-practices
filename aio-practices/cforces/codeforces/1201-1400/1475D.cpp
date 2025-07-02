#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> prefixA, prefixB;
vector<pair<ll, int>> phonesA, phonesB;
ll m;

bool ok(ll cost){
    for(int a = 0; a <= phonesA.size(); a++){
        ll rem = cost - a;
        if(rem < 0) break;
        int b = rem / 2;
        if(b > phonesB.size()) b = phonesB.size();
        if(prefixA[a] + prefixB[b] >= m){
            return true;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> m;
        ll suma = 0;
        phonesA.clear(); phonesB.clear();

        vector<pair<ll, int>> phones(n);
        for (int i = 0; i < n; i++){
            cin >> phones[i].first;
            suma += phones[i].first;
        }
        for(int i = 0; i < n; i++){
            cin >> phones[i].second;
            if(phones[i].second == 1){
                phonesA.push_back(phones[i]);
            }else{
                phonesB.push_back(phones[i]);
            }
        }

        sort(phonesA.rbegin(), phonesA.rend()); // descending
        sort(phonesB.rbegin(), phonesB.rend());

        prefixA = vector<ll>(phonesA.size() + 1, 0);
        prefixB = vector<ll>(phonesB.size() + 1, 0);
        for(int i = 0; i < phonesA.size(); ++i)
            prefixA[i+1] = prefixA[i] + phonesA[i].first;
        for(int i = 0; i < phonesB.size(); ++i)
            prefixB[i+1] = prefixB[i] + phonesB[i].first;

        if(prefixA.back() + prefixB.back() < m){
            cout << "-1\n";
            continue;
        }

        ll l1 = 0, r1 = 2 * n, ans = -1;
        while(l1 <= r1){
            ll mid = (l1 + r1) / 2;
            if(ok(mid)){
                ans = mid;
                r1 = mid - 1;
            }else{
                l1 = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}
