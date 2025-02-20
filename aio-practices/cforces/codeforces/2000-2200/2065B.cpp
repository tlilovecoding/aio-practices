#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        bool changes = true;
        while(changes == true){
            changes = false;
            for(int i = 0; i < str.size()-1; i++){
                if(str[i]==str[i+1]){
                    if(i!=0){
                        str[i] = str[i-1];
                        str.erase(i+1);
                    }else if(str.length()==2){
                        str[i] = 'x';
                        str.erase(i+1); 
                    }else{
                        str.erase(i+1);
                        str[i] = str[i+2];
                    }
                    changes = true;
                }else{
                    continue;
                }
                if(str.length() == 1){
                    changes = false;
                }
            }
        }
        cout<<str.length()<<endl;
    }
}