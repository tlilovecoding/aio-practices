#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    ifstream fin ("palin.txt");
    ofstream fout ("palout.txt");
    fin>>N;
    string word;
    fin>>word;
    int l, r;
    l = 0;
    r = N-1;
    while(l<=r){
        if(word[l]!=word[r]){
            char charTheyMustBeSame = char(min(int(word[l]), int(word[r])));
            word[l] = charTheyMustBeSame;
            word[r] = charTheyMustBeSame;
        }
        l++;
        r--;
    }
    fout<<word;

}