// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	int x3, y3, x4, y4;
	cin>>x3>>y3>>x4>>y4;
	int minx = min(x1, x3);
	int maxx = max(x2, x4);
	int miny = min(y1, y3);
	int maxy = max(y2, y4);
	int sideLength = maxx - minx;
	int sideLength2 = maxy - miny;
	int sidelength3 = max(sideLength, sideLength2);
	cout<<sidelength3*sidelength3;
}
