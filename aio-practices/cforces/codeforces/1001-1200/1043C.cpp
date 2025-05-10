#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    vector<int> switches (s.size(), 0);
    char currStartingLetter = s[0];
    // only flip at the end of a block of bs or as
    //if u flip an a-b sorted block then there must be an a block after otherwise it'll be bad!
    bool seenA = false;
    int aPos = -1;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == 'a' && seenA == false){
            seenA = true;
            aPos = i;
            break;
        }
    }
    bool toBeFlippedA = false;
    // if the index is before aPos, then it means that u can flip it!
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'b'){
            if(i+1 < s.size() && s[i+1] == 'b'){
                continue;
            }else{
                if(i < aPos){
                    toBeFlippedA = true;
                    // aaabbbbbba
                    switches[i] = 1;

                }
            }
        }else{
            if(i+1 < s.size() && s[i+1] == 'a'){
                continue;
            }else{
                if(toBeFlippedA){
                    switches[i] = 1;
                }
            }
        }
    }
    for(int i = 0; i < s.size(); i++){
        cout<<switches[i]<<" ";
    }


}