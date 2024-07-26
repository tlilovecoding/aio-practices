#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    bool ok = true;
    for(int i = 0; i< n; i++){
        int x; cin>>x;
        if(x == 1){
            cout<<"HARD"; ok = false;
            break;
        }
    }
    if(ok){
        cout<<"eASy";
    }
}