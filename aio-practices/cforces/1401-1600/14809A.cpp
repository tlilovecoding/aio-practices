#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    for(int i = 0; i < t; i++){
        string str;
        cin>>str;
        int turn = 1;
        for(int j = 0; j < str.size(); j++){
            if(turn == 1){
                if(str[j]!='a'){
                    str[j] = 'a';
                }else{
                    str[j] = 'b';
                }
                turn = 2;
            }else{
                if(str[j] !='z'){
                    str[j] = 'z';
                }else{
                    str[j] = 'y';
                }
                turn = 1;
            }
        }
        cout<<str<<"\n";
    }
}