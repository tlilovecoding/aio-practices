#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("bookin.txt");
    ofstream fout("bookout.txt");
    int n; fin>>n;
    int currentLength = 0;
    int ans = 0;
    vector<pair<int, char>> consecutiveLengths;
    char currentLetter;
    int currcount = 0;
    fin>>currentLetter;
    for(int i = 1; i< n; i++){
        char curr;
        fin>>curr;
        if(curr==currentLetter){
            ans++;
            currcount++;
        }else if(curr!=currentLetter && curr!='?'){
            consecutiveLengths.push_back({currcount, currentLetter});
            currcount = 0;
            currentLetter = curr;
        }else{
            consecutiveLengths.push_back({-1, 'o'});
        }
    }
    fout<<ans+1;
    /*for(int i= 0; i < consecutiveLengths.size(); i++){
        if(consecutiveLengths[i].first==-1){
            if(consecutiveLengths[i].first)
        }
        */
    }