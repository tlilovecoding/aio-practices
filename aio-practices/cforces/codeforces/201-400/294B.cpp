#include <bits/stdc++.h>
using namespace std;
int main(){
    // if you're not putting every book vertically, you want to sacrifice the book that's the non-widest.
    // let dp[i] = the max widthness when the thickness = i - you want to be placing all the really wide books
    // in the bottom bc otherwise the top books won't be supported.
    // iterate through all possible values of i and see the smallest of which i >= totoal width - dp[i] (which is the top)
    //here, iterating through the thickness makes doing it possible
    //how do you come up with the idea of iterating through thickness...
    int n; cin>>n;
    vector<int> t;
    vector<int> w;
    int maxThickness = 0;
    int maxWidth = 0;
    for(int i = 0; i < n; i++){
        int a, b; cin>>a>>b;
        t.push_back(a);
        w.push_back(b);
        maxThickness+=a;
        maxWidth += b;
    }
    vector<int> dp(maxThickness+1, 0);
    
    vector<bool> canVisit(maxThickness+1, false);
    dp[0] = 0;
    canVisit[0] = true;
    //dp[j] = max width that can be made with thickness j.
    for(int i = 0; i < n; i++){
        for(int j = maxThickness; j >= t[i]; j--){
            //for each thickness see if adding the book i would make the width max.
            //you're not removing stuff ur just seeing if adding it is optimal, compared to if u add another book.
            //also iterating down the thicknesses makes sure that ur not adding the same book twice into a stack. 
            dp[j] = max(dp[j], dp[j-t[i]] + w[i]);            
            if(canVisit[j-t[i]]){
                canVisit[j] = true;
            }
        }
    }
    for(int i = 0; i <= maxThickness; i++){
        if(canVisit[i] && i >= (maxWidth-dp[i])){
            cout<<i;
            return 0;
        }
    }



}