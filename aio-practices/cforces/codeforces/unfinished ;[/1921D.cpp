#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<long long> a;
        vector<long long> b;
        for(int i = 0; i < n; i++){
            long long j; cin>>j;
            a.push_back(j);
        }for(int i = 0; i < m; i++){
            long long k; cin>>k;
            b.push_back(k);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());
        vector<long long> c(n);
        int l_pointer = 0;
        int r_pointer = n-1;
        int l_p = 0;
        int r_p = m-1;
        while(l_pointer<=r_pointer){
            if(l_pointer == r_pointer){
                c[l_pointer] = b[l_p];
            }else{
                c[l_pointer] = b[l_p];
                c[r_pointer] = b[r_p];
            }
            l_pointer++;
            r_pointer--;
            r_p--;
            l_p++;
        }
        long long suma = 0;
        for(int i = 0; i < n; i++){
            suma += abs(a[i] - c[i]);
        }
        cout<<suma<<endl;
    }
}