#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
	int n; cin>>n;
	string sequence; cin>>sequence;
	int ans = 0;
	for(int i = 1; i <=n; i++){
		//i is the number of houses in a row.
		//for testing this, different starting point for each.
		set<string> allSubstrings;
		bool ok = true;
		for(int j = 0; j <= (n-i); j++){
			//ABCDABC
			//j is for iterating through the start point for a substring search!
			string curr = sequence.substr(j, i);
			if(allSubstrings.count(curr)){
				ok = false;
				break;
			}else{
				allSubstrings.insert(curr);
			}
		}
		if(ok){
			ans = i;
			break;
		}


	}
	cout<<ans;

}
