#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	int n, k;
	cin>>n>>k;
	vector<string> words;
	for(int i = 0; i < n; i++){
		string w; cin>>w;
		words.push_back(w);
	}
	int currSize = 0;
	int wordNum = 0;
	string curr = "";
	while(wordNum != n){
		if(words[wordNum].size() + currSize <=k){
			
			if(currSize!=0){
				curr+=" ";
			}
			curr+=words[wordNum];
			currSize+=words[wordNum].size();
			wordNum++;
		}else{
			cout<<curr<<endl;
			curr = "";
			currSize = 0;
		}
		
	}
	if(!curr.empty()){
		cout<<curr<<endl;
	}
}