#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> L;
    pair<int, int> B;
    pair<int, int> R;
    //row, column
    for(int i = 9; i >-1; i--){
        for(int j = 0; j < 10; j++){
            char w; cin>>w;
            if(w=='L'){
                L = {i, j};
            }else if(w=='B'){
                B = {i, j};
            }else if(w=='R'){
                R = {i, j};
            }
        }
    }
    int ans;
    ans = abs(L.first - B.first) + abs(L.second - B.second) -1 ;
    if(B.second == L.second && L.second== R.second){
                if(L.first < R.first && R.first < B.first){
            ans+=2;
        }else if(L.first > R.first && R.first > B.first){
            ans+=2;
        }

    }else if(B.first == L.first && L.first == R.first){
        if(L.second < R.second && R.second < B.second){
            ans+=2;
        } else if(B.second < R.second && R.second < L.second){
            ans+=2;
        }
    }
    cout<<ans;

}