#include <bits/stdc++.h>
using namespace std;
int main(){
    //u need some tracker for how many u need to go up by to make the whole thing 
    //great if there are two equal
    //e.g. 9 8 7 6 5 5 --> up to 5, the answer is 0, but on 6, it's either
    //you lift the fith one up to 10 or the sixth one up by one.
    //so u need tgo know if its 10 or what
    //which is one + the longest decreasing sequence by 1 exactly
    //so dp[i] = min needed to make the fence till i great 
    // = min(dp[i-1] + rubles [i]*mindecseq1, dp[i-2] + rubles[i-1] * mindecseq2)
    //or current if not needed
    //2, 4 2, 1 3, 5
    //2 2 3
    //wait this doesnt account for when the cheapest one rn = 
    // the cheapest one for the secondmove cuz it may cause
    //the second move to go a lot
    
}