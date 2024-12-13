// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> cows(2, 0); 
	for(int i = 0; i < n; i++){
		int x; cin>>x;
		cows[(x%2)]++;
	}
	while(cows[1] > cows[0]){
		cows[1] -=2;
		cows[0]++;	
	}
	if(cows[0] > cows[1]+1){
		cows[0] = cows[1] + 1;
	}
	cout<<cows[0] + cows[1];

}
