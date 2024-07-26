#include <bits/stdc++.h>
using namespace std;
string num [1000000];
int main(){
    ifstream fin ("cutein.txt");
    ofstream fout ("cuteout.txt");
    int N;
    fin >> N; 
    for (int i = 0; i < N; i++){
        fin >> num[i];
    }
    int ans = 0;
    for(int i = N-1; i > -1; i--){
        if(num[i] == "0"){
            ans+=1;
        }
        else{
            break;
        }
    }
    fout << ans;
}