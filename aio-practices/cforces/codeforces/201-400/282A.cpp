#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int x = 0;
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        if(str[0] == '+'||str[2]=='+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x;
}