#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string w;
    cin >> w;

    int alt_length = 1;
    for (int i = 1; i < n; ++i) {
        if (w[i] != w[i - 1]) {
            alt_length++;
        }
    }

    // Add up to 2 more by flipping, but cap at n
    cout << min(alt_length + 2, n) << endl;
    return 0;
}
