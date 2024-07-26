#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the strings
    if (str1 == str2) {
        cout << 0;
    } else if (str1 < str2) {
        cout << -1;
    } else {
        cout << 1;
    }

    return 0;
}
