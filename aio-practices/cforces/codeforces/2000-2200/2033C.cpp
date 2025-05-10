/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> students; 
        for(int i = 0; i < n; i++){
            int w; cin>>w;
            students.push_back(w);
        }
        //dp to track the minimum disturbance htat can be created
        //strategy: either swap or not swap
        //just see which one has less total disturbanbce
        int l = 0;
        int r = n-1;
        while(l<r){
            //calculate disturbanceIfFlipped
            int disturbanceIfFlipped = 0;
            int currentDisturbance = 0; // = 2 if one before and one after both equal
            // = 1 if only one is bulit like that
            if(l!=0 && r != n-1){
                if(students[l] == students[l+1] && students[l] == students[l-1]){
                    currentDisturbance+=2;
                }else if(students[l] == students[l+1] || students[l] == students[l-1]){
                    currentDisturbance++;
                }
                if(students[r] == students[r+1] && students[r] == students[r-1]){
                    currentDisturbance+=2;
                }else if(students[r] == students[r+1] || students[r] == students[r-1]){
                    currentDisturbance++;
                }

            }else{
                if(students[l] == students[l+1]){
                    currentDisturbance++;
                }if(students[r] == students[r-1]){
                    currentDisturbance++;
                }
                //probably need check to make sure they don't overlap.
            }

            swap(students[l], students[r]);
            if (l > 0 && students[l] == students[l - 1]) disturbanceIfFlipped++;
            if (l < n - 1 && students[l] == students[l + 1]) disturbanceIfFlipped++;
            if (r > 0 && students[r] == students[r - 1]) disturbanceIfFlipped++;
            if (r < n - 1 && students[r] == students[r + 1]) disturbanceIfFlipped++;

            if(disturbanceIfFlipped > currentDisturbance){
                swap(students[l], students[r]);
            }
            l++;
            r--;
        

            //3 1 1 2 1 
            // 2 1 2 2 3 3
            // 3 1 2 2 3 2
        }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            if(students[i] == students[i+1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

}*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> students; 
        for(int i = 0; i < n; i++){
            int w; cin>>w;
            students.push_back(w);
        }
        //strategy: either swap or not swap
        //just see which one has less total disturbanbce
        int l = 0;
        int r = n-1;
        for(int i=n/2-1;i>=1;i--){
            if(students[i]==students[i+1] || students[n-i+1]==students[n-i]){
                swap(students[i],students[n-i+1]);
            }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            if(students[i] == students[i+1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

}
}