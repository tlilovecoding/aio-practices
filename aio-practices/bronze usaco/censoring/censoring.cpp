#include "bits/stdc++.h"
using namespace std;

int main() {
	string s;
	string t;
	cin >> s >> t;

	string censored;
	for (int i = 0; i < s.size(); i++) {
		censored += s[i];
		if (censored.size() > t.size() &&
		    censored.substr(censored.size() - t.size()) == t) {
			censored.resize(censored.size() - t.size());
		}
	}
	cout << censored << endl;
}