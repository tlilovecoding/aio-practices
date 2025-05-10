#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll n;
     cin>>n;
     ll a[n];
     for(ll i=0;i<n;i++)
     cin>>a[i];
     
     ll dp[n+1][3];
     for(ll i=0;i<=n;i++)
     {
          dp[i][0]=INT_MAX;
          dp[i][1]=INT_MAX;
          dp[i][2]=INT_MAX;
          
     }
     
     dp[0][0]=0; dp[0][1]=0; dp[0][2]=0; //base cases
     for(ll i=1;i<=n;i++)
     {
          dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2])); // for a rest day, min because we want min resting days
          
          if(a[i-1]==1|| a[i-1]==3) // for a contest or gym
           dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
               
          
          
          if(a[i-1]==2 || a[i-1]==3)
          dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
     }
     
     cout<<min(dp[n][0],min(dp[n][1],dp[n][2]));
}