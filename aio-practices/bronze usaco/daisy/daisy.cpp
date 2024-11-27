#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int startingFlower = 0; startingFlower < n; startingFlower++){
        float sum = 0;
        for(int i = startingFlower; i < n; i++){
            sum += arr[i];
            float avg = sum/(i-startingFlower+1);
            //cout<<avg<<endl;
            for(int j = startingFlower; j <= i; j++){
                if(arr[j] == avg){
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans;
}