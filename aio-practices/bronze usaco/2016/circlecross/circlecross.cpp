// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out" ,"w", stdout);
	//array to see how many of the letter has been encountered, and the place at which it was encountered?
	vector<pair<int, int> > count (26, {0, 0});
	//last time seen, number of times seen
	//if last time seen < last time seen of a AND it has only been seen one time:
	//i.e. ABA(2)B at A(2) see how many elements before it are only encourtered once.
	int ans = 0;
	for(int i = 0; i < 52; i++){
		char a; cin>>a;
		int w = int(a)-'A';
		if(count[w].second==0){
			count[w].second++;
			count[w].first = i; 
		}
		else if(count[w].second==1){
			//AB  A 
			int lastTimeSeen = count[w].first;
			for(int j = 0; j < 52; j++){
				if(count[j].first > lastTimeSeen && count[j].second==1){
					ans++;
				}
			}
			count[w].first = i;
			count[w].second++;
		
		}
	}
	cout<<ans;

}