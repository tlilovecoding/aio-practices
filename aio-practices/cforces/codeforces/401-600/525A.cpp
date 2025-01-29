#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string input;
    cin>>input;
    int ans = 0;
    map<char, int> key_supplies;
    for(int i = 0; i < 2*n-2; i+=2){
        char a, b;
        a = input[i];
        b = input[i+1];
        key_supplies[a]++;
        if(key_supplies[tolower(b)] > 0){
            key_supplies[tolower(b)]--;
        }else{
            ans++;
        }
    }
    cout<<ans;

}