#include <bits/stdc++.h>
using namespace std;
double n;
double m;
double a;
int main(){
    cin>>n>>m>>a;
    cout<<(long long) ceil((n/a))* (long long) ceil((m/a));
}