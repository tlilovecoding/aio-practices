#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string ans;
    for(int i = 1; i < 9000; i++){
        string str = to_string(n+i);
        if(str[0]!=str[1] && str[1]!= str[2] && str[2] != str[3] && str[0] != str[2] && str[0] != str[3] && str[1] != str[3]){
            ans = str;
            break;
        }
    }cout<<ans;
}