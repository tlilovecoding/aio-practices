#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("restin.txt");
    ofstream fout("restout.txt");

    int n, a, b;
    fin >> n >> a >> b;

    int ans = 0;
    vector<int> children;
    vector<int> teachers;

    for (int i = 0; i < n; i++) {
        int c, t;
        fin >> c >> t;
        int amountEaten = max(0, max(c, t));
        if (amountEaten == c && c > 0) {
            children.push_back(c-max(t, 0)); // how much will be sacrificed if you give teachers' meal instead
        } else if (amountEaten == t && t > 0) {
            teachers.push_back(t-max(c, 0));
        }

        ans += amountEaten;
    }

    sort(children.begin(), children.end());
    for(int i = 0; i < children.size(); i++){
        cout<<children[i]<<" ";
    }
    sort(teachers.begin(), teachers.end());

    if(children.size()>a){
        cout<<"b";
        for(int i = 0; i < children.size()-a; i++){
            ans-=children[i];
        }
    }
    else if(teachers.size()>b){
        cout<<"a";
        for(int i =0; i < teachers.size()-b; i++){
            ans-=teachers[i];
        }
    }
    fout << ans;
    return 0;
}
