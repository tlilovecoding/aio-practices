#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        vector<char> river(n+2);
        river[0] = 'L';
        river[n+1] = 'L';
        for(int i = 1; i <= n; i++){
            cin>>river[i];
        }
        int currJumped = 0; // from a log
        int metresSwum = 0;
        bool swimmingMode = false;
        bool ok = true;
        for(int i = 1; i <= n+1; i++){
            if(swimmingMode == false){
                currJumped++;
            }
            if(river[i] == 'L'){
                if(swimmingMode == true){
                    swimmingMode = false;
                }
                currJumped = 0;
            }else if(river[i] == 'C'){
               if(swimmingMode == true){
                    ok = false;
                    break;
               }else if(currJumped >= m){
                    ok = false;
                    break;
               }
            }else if(river[i] == 'W'){
                if(currJumped >= m){
                    swimmingMode = true;
                    currJumped = 0;
                }
                if(swimmingMode == true){
                    metresSwum++;
                    if(metresSwum > k){
                        ok = false;
                        break;
                    }
                }
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
