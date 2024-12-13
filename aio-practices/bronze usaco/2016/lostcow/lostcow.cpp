#include <iostream>
#include <cmath>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin >> x >> y;

    int currpos = x;
    int distance = 0;
    int step = 1;
    bool moveRight = true;

    while (true) {\
        int nextpos = moveRight ? x + step : x - step;
        int segment_distance = abs(nextpos - currpos);
        if ((currpos <= y && y <= nextpos) || (currpos >= y && y >= nextpos)) {
            distance += abs(y - currpos);
            break;
        }
        distance += segment_distance;
        currpos = nextpos;
        step *= 2;
        moveRight = !moveRight;
    }

    cout << distance << endl;
    return 0;
}
