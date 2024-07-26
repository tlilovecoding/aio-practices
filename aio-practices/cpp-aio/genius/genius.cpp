#include<bits/stdc++.h>
using namespace std;
 
ifstream in("genin.txt");
ofstream out("genout.txt");
int score[1005];
 
int main(){
    int n,p;
    in>>n>>p;
    //
    int problems=1;
    int person=1;
    while(true){
        if(p<problems){
            score[person]+=p;
            break;
        }
        score[person]+=problems;
        p-=problems;
        problems++;
        person=person%n+1;
    }
    //
    int max_problems=INT_MIN;
    for(int i=1;i<=n;i++){
        max_problems=max(max_problems,score[i]);
    }
    for(int i=1;i<=n;i++){
        if(score[i]==max_problems){
            out<<i<<' '<<max_problems;
            return 0;
        }
    }
}