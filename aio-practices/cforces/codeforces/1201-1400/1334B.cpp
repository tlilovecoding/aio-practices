#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, x; 
        cin >> n >> x;
        vector<int> people(n);
        for(int i = 0; i < n; i++){
            cin >> people[i];
        }
        
        sort(people.begin(), people.end(), greater<int>());
        double runningSum = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            runningSum += people[i];
            //cout<<double(runningSum/(i+1))<<endl;
            if(double(runningSum)/(i+1) < x){
                
                break;
            }
            ans = i+1;
        }
        
        cout << ans << endl;
    }
    return 0;
}
