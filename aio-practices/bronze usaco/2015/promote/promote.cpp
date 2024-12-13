#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	int bb, ba; cin>>bb>>ba;
	int sb, sa; cin>>sb>>sa;
	int gb, ga; cin>>gb>>ga;
	int pb, pa; cin>>pb>>pa;
	int promotedToPlatinum = pa-pb;
	int promotedToGold = ga - gb + promotedToPlatinum;
	int promotedToSilver = sa - sb + promotedToGold;
	cout<<promotedToSilver<<endl<<promotedToGold<<endl<<promotedToPlatinum;

}
