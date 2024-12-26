// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int kalindromeMaybe[n];
        for(int i = 0; i < n; i++){
            cin>>kalindromeMaybe[i];
        }
        int l = 0, r = n-1;
        bool found = false;
        //this bit we find the discreprancies;
        while(l<=r){
            if(kalindromeMaybe[l] != kalindromeMaybe[r]){
                found = true;
                break;
            }else{
                l++; r--;
            }
        }
        l = kalindromeMaybe[l];
        r = kalindromeMaybe[r];
        int l2 = 0, r2 = n-1;
        int okay = true;
        if(found){
            while(l2 <= r2){
                if(kalindromeMaybe[l2]==l){
                    l2++;
                }else if(kalindromeMaybe[r2] == l){
                    r2--;
                }else if(kalindromeMaybe[l2]!=kalindromeMaybe[r2]){
                    okay = false; break;
                }else{
                    l2++;
                    r2--;
                }
            }
            if(!okay){
                okay = true;
                l2 = 0; r2 = n-1;
                while(l2<=r2){
                    if(kalindromeMaybe[l2]==r){
                        l2++;
                    }else if(kalindromeMaybe[r2]==r){
                        r2--;
                    }else if(kalindromeMaybe[l2]!=kalindromeMaybe[r2]){
                        okay = false;
                        break;
                    }else{
                        l2++;
                        r2--;
                    }
                }
            }
            if(okay){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
}