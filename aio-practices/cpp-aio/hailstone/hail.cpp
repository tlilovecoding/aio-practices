#include <bits/stdc++.h>
using namespace std;
int doCollatzThing(int startingInt){
    int ans = 0;
    while(startingInt !=1){
        if(startingInt%2==0){
            startingInt/=2;
        }else{
            startingInt*=3;
            startingInt+=1;
        }
        ans+=1;
    }
    return ans;
}
int main(){
    ifstream fin ("hailin.txt");
    ofstream fout ("hailout.txt");
    int num;
    fin>>num;
    while(num!=0){
        fout<<doCollatzThing(num)<<"\n";
        fin>>num;
    }
}