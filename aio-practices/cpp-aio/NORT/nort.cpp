#include <bits/stdc++.h>
using namespace std;
int R, C;
int main(){
    ifstream input ("nortin.txt");
    ofstream output ("nortout.txt");
    input >> R >> C;
    if(R==0 || C ==0){
        output<<0;
    }
    if(R%2 == 0 || C%2 == 0){
        output<<(R*C);
    }else{
        output<<(R*C)-1;
    }
}