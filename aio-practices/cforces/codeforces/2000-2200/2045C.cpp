/*#include <bits/stdc++.h>
using namespace std;
int main(){
    string c, d;
    cin>>c>>d;
    int firstOccurencesInC[26] = {0};
    for(int i = 0; i < c.size(); i++){
        char a = c[i];
        if(firstOccurencesInC[a-'a'] == 0){
            firstOccurencesInC[a-'a'] = i;
        }
    }
    string ans = "-1";
    for(int i = d.size()-2; i >=0; i--){
        if(firstOccurencesInC[d[i]-'a'] == 0){
            continue;
        }else{
            string newOne;
            newOne = c.substr(0, firstOccurencesInC[d[i]-'a']) + d.substr(i);
            if(ans == "-1" || newOne.size() < ans.size()){
                ans = newOne;
            }
        }
    }
    cout<<ans;
}*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    string c, d; cin>>c>>d;
    vector<int> firstOccurrencesInD (26, -1);
    for(int i = d.size()-2; i > -1; i--){
        if(firstOccurrencesInD[d[i]-'a'] == -1){
            firstOccurrencesInD[d[i]-'a'] = i;
        }
    }
    string ans = "-1";
    for(int i = 1; i < c.size(); i++){
        //checking to see if character is compatible
        if(firstOccurrencesInD[c[i]-'a'] == -1){
            continue;
        }else{
            int length = i + d.size() - firstOccurrencesInD[c[i]-'a'];
            if(length < ans.size() || ans == "-1"){
                ans = c.substr(0, i) + d.substr(firstOccurrencesInD[c[i] - 'a']);
            }
        }
    }
    cout<<ans;
}