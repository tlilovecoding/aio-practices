#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    vector<char> idkSortedArr;
    for(int i = 0; i < s.length(); i+=2){
        idkSortedArr.push_back(s[i]);
    }
    sort(idkSortedArr.begin(), idkSortedArr.end());
    for(int i = 0; i < idkSortedArr.size()-1; i++){
        cout<<idkSortedArr[i]<<'+';
    }
    cout<<idkSortedArr.back();
}