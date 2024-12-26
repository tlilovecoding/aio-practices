#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    string str = "";
    if(n > m+1){
        cout<<-1;
        return 0;
    }else if(m > 2*n + 2){
        cout<<-1;
        return 0;
    }if(n == m + 1){
        n--;
        str+="0";
        
    }if(m == n + 1){
        m--;
        str+="1";
    }
    while(n != m){
            if(m >= 2){
                str+="11";
                m-=2;
            }
            if(n >= 1){
                str+="0";
                n--;
            }
        }
    while(n==m && m != 0){
        str+="1";
        str+="0";
        m--;
        n--;
    }
        cout<<str;
}