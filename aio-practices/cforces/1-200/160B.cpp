#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> fH;
    vector<int> sH;
    for(int i = 0; i < n; i++){
        char j; cin>>j;
        fH.push_back(int(j) - '0');
    }for(int i = 0; i < n; i++){
        char l; cin>>l;
        sH.push_back(int(l) - '0');
    }
    sort(fH.begin(), fH.end());
    sort(sH.begin(), sH.end());
    bool greater = true;
    bool firstTime = true;
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(fH[i] < sH[i]){
            if(greater == true && !firstTime){
                ok = false;
                break;
            }else{
                greater = false;
            }
        }else if(fH[i] > sH[i] && !firstTime){
            if(greater == false){
                ok = false;
                break;
            }else{
                greater = true;
            }
        }else{
            ok = false;
            break;
        }
        firstTime = false;
    }
    
        if(ok){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
}