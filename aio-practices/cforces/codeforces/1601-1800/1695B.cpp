#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int piles;
        cin>>piles;
        int stones[piles];
        for(int i = 0; i < piles; i++){
            cin>>stones[i];
        }
        if(piles%2==1){
            cout<<"Mike"<<"\n";
        }else{
            int minimumElemendInd = 0; //if they subtract 1 every time
            for(int j = 0; j<piles; j++){
                if(stones[j]<stones[minimumElemendInd]){
                    minimumElemendInd = j;
                }
            }
            if(minimumElemendInd%2 == 0){
                cout<<"Joe"<<"\n";
            }
                else{cout<<"Mike"<<"\n";}
        }
    }
}