#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string seq; cin>>seq;
    vector<int> list_up_to; 
    for(int i = 0; i < n; i++){
        int w; cin>>w;
        list_up_to.push_back(w);
    }
    int count = 0;
    //check the only ones that can be a representative pair by condition 1
    int H = -1;
    int G = -1;
    int lastH = 0;
    int lastG = 0;
   for(int i = 0; i < n; i++){
        if(seq[i] == 'H' && H == -1){
            H = i+1;
        }else if(seq[i] == 'G' && G == -1){
            G = i+1;
        }else if(seq[i] == 'H' && H!=-1){
            lastH = i+1;
        }else if(seq[i] == 'G' && G != -1){
            lastG = i+1;
        }
    }
    int hLeader = -1;
    int gLeader = -1;
    if(list_up_to[H-1] >= lastH){
        hLeader = H;
    }
    if(list_up_to[G-1]>=lastG){
        gLeader = G;
    }

    if(gLeader > -1 && hLeader > -1){
        count++;
    }
    for(int i = 0; i < n; i++){
        if(seq[i] == 'G'){
            if((i+1) < hLeader && hLeader != -1 && (i+1)!= gLeader && list_up_to[i]>= hLeader){
                //therefore these form a pair
                count++;
            }
        }else if(seq[i] == 'H'){
            if((i+1) < gLeader && gLeader != -1 && (i+1) != hLeader && list_up_to[i] >= gLeader){
                count++;
            }
        }
    }
    cout<<count;


}