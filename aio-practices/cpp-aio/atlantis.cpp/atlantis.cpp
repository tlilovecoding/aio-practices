#include <bits/stdc++.h>
using namespace std;
int atlantis[1000000];
int N;
int main(){
    ifstream input ("atlanin.txt");
    ofstream output ("atlanout.txt");
    input>>N;
    for(int i = 0; i<N; i++){
        input>>atlantis[i];
    }
    if(N<3){
        output<<0;
        return 0;
    }
    int ptr = 0;
    int ans = 0;
    vector<int> ss;
    for(ptr; ptr<N; ptr++){
        while(!ss.empty() && atlantis[ptr] > ss.back()){
            if (atlantis[ptr] > ss.back()){
                ss.pop_back();
                ans+=(ptr - atlantis[-1] - 1);
                ss.pop_back();
            ss.push_back(ptr);
            ss.push_back(atlantis[ptr]);
        }
    }

    output<<ans;
}

rgfghj cfyfyfy
