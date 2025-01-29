/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    unordered_map<int, int> lengths;
    for(int i = 0; i < n; i++){
        int j; cin>>j;
        lengths[j]++;
    }
    int q; cin>>q;
    while(q--){
        char w; cin>>w;
        int k; cin>>k;
        if(w=='+'){
            lengths[k]++;
        }else{
            lengths[k]--;
        }
        vector<int> values;
        for(int i = 0; i < lengths.size(); i++){
            values.push_back(lengths[i]);
        }
        sort(values.begin(), values.end(), greater<>());
        if(values[0] >= 8){
            cout<<"YES"<<endl;
        }else if(values[0] >= 6 && values[1] && values[1] >= 2){
            cout<<"YES"<<endl;
        }else if(values[0] >= 4 && values[1] && values[1] >= 4){
            cout<<"YES"<<endl;
        }else if(values[0] >= 4 && values[1] && values[2] && values[1] >= 2 && values[2] >=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    unordered_map<int, int> lengths;
    int no2 = 0, no4 = 0, no6 = 0, no8 = 0;
    
    for(int i = 0; i < n; i++){
        int j; cin>>j;
        lengths[j]++;
        if(lengths[j]==2){
            no2++;
        }else if(lengths[j]==4){
            no4++;
            no2--;
        }else if(lengths[j]==6){
            no6++;
            no4--;
        }else if(lengths[j]==8){
            no8++;
            no6--;
        }
    }
    int q; cin>>q;
    while(q--){
        
        char w; cin>>w;
        int k; cin>>k;
        if(w=='+'){
            lengths[k]++;
            if(lengths[k]==2){
                no2++;
            }else if(lengths[k]==4){
                no4++;
                no2--;
            }else if(lengths[k]==6){
                no6++;
                no4--;
            }else if(lengths[k]==8){
                no8++;
                no6--;
            }
        }else{
            lengths[k]--;
            if(lengths[k]==1){
                no2--;
            }else if(lengths[k]==3){
                no4--;
                no2++;
            }else if(lengths[k]==5){
                no6--;
                no4++;
            }else if(lengths[k]==7){
                no8--;
                no6++;
            }
        }
        if(no8>0){
            cout<<"YES"<<endl;
        }else if(no6>0 && (no4 > 0 || no2 > 0 || no6 > 1)){
            cout<<"YES"<<endl;
        }else if(no4>1){
            cout<<"YES"<<endl;
        }else if(no4 > 0 && no2 > 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }


}