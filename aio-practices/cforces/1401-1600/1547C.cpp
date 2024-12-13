#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int k, n, m; 
        cin>>k>>n>>m;
        vector<int> final;
        vector<int> mono;
        vector<int> poly;
        for(int i = 0; i < n; i++){
            int w; cin>>w;
            mono.push_back(w);
        }
        for(int i = 0; i < m; i++){
            int w; cin>>w;
            poly.push_back(w);
        }
        int currNumCount = k;

        int nP = 0;
        int mP = 0;
        bool ok = true;
        while(nP < n || mP < m){
            if(nP < n && mono[nP] == 0){
                currNumCount++;
                final.push_back(0);
                nP++;
            }else if(mP < m && poly[mP] == 0){
                currNumCount++;
                final.push_back(0);
                mP++;
            }else if(mP < m && poly[mP] <= currNumCount){
                final.push_back(poly[mP]);
                mP++;
            }else if(nP < n && mono[nP] <= currNumCount){
                final.push_back(mono[nP]);
                nP++;
            }else{
                cout<<-1<<endl;
                ok = false;
                break;
            }
        }
        if(ok == true){
            for(int i = 0; i < final.size(); i++){
                cout<<final[i]<<" ";
            }
            cout<<endl;
        }

    }
}


/**/