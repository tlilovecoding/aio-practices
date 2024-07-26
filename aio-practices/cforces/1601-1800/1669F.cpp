#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while (t--){
        int n; cin>>n;
        vector<int> candies(n);
        for(int i = 0; i < n; i++){
            cin>>candies[i];
        }  
        int a = 0; int b = n-1;
        int currA = 0; int currB = 0;
        int max = 0;
        bool aMove = true;
        bool bMove = true;
        while(a<b){
            if(aMove){
              currA+=candies[a];  
            }
            if(bMove){
              currB+=candies[b];  
            }
            aMove = false;
            bMove = false;
            if(currA == currB){
                a++; b--;
                aMove = true;
                bMove = true;
                max = a + (n-b-1);
            }else if(currA<currB){
                a++;
                aMove = true;
            }
            else{
                b--;
                bMove = true;
            }
        }
        cout<<max<<endl;
    }
}