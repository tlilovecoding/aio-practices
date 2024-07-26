#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    ifstream fin("art.in");
    ofstream fout("art.out");
    
    int n; 
    fin >> n;
    int arr[n][n];    
    int leftmosts[10], rightmosts[10], upmost[10], downmosts[10];
    fill(leftmosts, leftmosts + 10, n);
    fill(rightmosts, rightmosts + 10, -1);
    fill(upmost, upmost + 10, n);
    fill(downmosts, downmosts + 10, -1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fin >> arr[i][j];
            int val = arr[i][j];
            downmosts[val] = max(i, downmosts[val]);
            upmost[val] = min(i, upmost[val]);
            leftmosts[val] = min(j, leftmosts[val]);
            rightmosts[val] = max(j, rightmosts[val]);
        }
    }

    int ans = 0;
    bool colork[10];
    fill(colork, colork + 10, true);

    for(int i = 1; i <= 9; i++){
        for(int j = leftmosts[i]; j <= rightmosts[i]; j++){
            for(int y = upmost[i]; y <= downmosts[i]; y++){
                if(arr[y][j] != i){
                    colork[i] = false;
                }
            }
        }
    }

    for(int i = 1; i <= 9; i++){
        if(colork[i]){
            ans++;
        }
    }

    fout << ans << endl;

    fin.close();
    fout.close();
    return 0;
}
