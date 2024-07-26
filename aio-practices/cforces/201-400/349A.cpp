#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int n25 = 0, n50 = 0;
    int vals[n];
    for(int i = 0; i < n; i++){
        cin>>vals[i];
    }
    bool okay = true;;
    for(int i = 0; i < n; i++){
        if(vals[i] == 25){
            n25++;
        }else if(vals[i] == 50){
            if(n25>=1){
                n25--;
                n50++;
            }else{
                okay = false;
                break;
            }
        }else if(vals[i] == 100){
            if(n25>=1&&n50>=1){
                n50--;
                n25--;
            }else if (n25>=3){
                n25-=3;
            }else{
                okay = false;
                break;
            }
        }
    }
    if(okay){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}