#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        string str; cin>>str;
        bool zeroThen1 = false;
        int partitions = 1;
        char prev = str[0];
        for(int i = 1; i < str.length(); i++){
            if(prev == '0' && str[i] == '1' && !zeroThen1){
                zeroThen1 = true;
                prev = str[i];
                continue;
            }else if(prev!=str[i]){
                partitions++;
                prev = str[i];
            }
        }
        cout<<partitions<<endl;
    }
}