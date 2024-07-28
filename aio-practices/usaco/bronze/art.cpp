#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_COLOR = 9;

int main() {
    ifstream fin("art.in");
    ofstream fout("art.out");
    
    int n; 
    fin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    
    // Arrays to track the boundaries for each color
    vector<int> leftmosts(MAX_COLOR + 1, n);
    vector<int> rightmosts(MAX_COLOR + 1, -1);
    vector<int> upmost(MAX_COLOR + 1, n);
    vector<int> downmosts(MAX_COLOR + 1, -1);
    vector<bool> valid_start(MAX_COLOR + 1, false);

    // Read the matrix and update the boundaries
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char curr_char;
            fin >> curr_char;
            int val = curr_char - '0';
            arr[i][j] = val;
            if (val != 0) { // Only process non-zero values
                downmosts[val] = max(i, downmosts[val]);
                upmost[val] = min(i, upmost[val]);
                leftmosts[val] = min(j, leftmosts[val]);
                rightmosts[val] = max(j, rightmosts[val]);
                valid_start[val] = true;
            }
        }
    }

    // Check if each color forms an independent rectangle
    for (int color = 1; color <= MAX_COLOR; color++) {
        for (int r = upmost[color]; r <= downmosts[color]; r++) {
            for (int c = leftmosts[color]; c <= rightmosts[color]; c++) {
                if (arr[r][c] != color) {
                    valid_start[arr[r][c]] = false;
                }
            }
        }
    }

    // Count the number of independent colors
    int total_starts = 0;
    for (bool start : valid_start) {
        total_starts += start ? 1 : 0;
    }

    fout << total_starts << endl;

    fin.close();
    fout.close();
    return 0;
}
