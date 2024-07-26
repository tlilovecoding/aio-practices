#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int, int>> rectangle (n); 
    for(int i = 0; i < n; i++){
        cin>>rectangle[i].first;
        cin>>rectangle[i].second;
    }
    int curr = max(rectangle[0].first, rectangle[0].second);
    //cout<<curr<<endl;
    bool okay = true;
    for(int i = 1; i < n; i++){
        //cout<<curr<<endl;
        if(rectangle[i].first<=curr && rectangle[i].second<=curr){
            curr = max(rectangle[i].first, rectangle[i].second);
        }else if(rectangle[i].first<=curr){
            curr = rectangle[i].first;
        }else if (rectangle[i].second<=curr){
            curr = rectangle[i].second;
        }else{
            okay = false;
            break;
        }
    }
    if(okay){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}