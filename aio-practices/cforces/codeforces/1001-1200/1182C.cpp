#include <bits/stdc++.h>
using namespace std;

// Stores all input words (1-based index for convenience)
string words[1000000];

// Stores pairs of words that perfectly match (same vowel count & same last vowel)
vector<pair<int, int>> perfect_pairs;

// Stores pairs that only partially match (same vowel count, but different last vowels)
vector<pair<int, int>> semi_pairs;

// Vowel encoding: a=1, e=2, i=3, o=4, u=5
int vowel_code[127] = {0};

// For tracking unused words: arr[vowel_count][last_vowel_code] = word_index
int unused[1000000][6];

void print_lyric(int a1, int a2, int b1, int b2) {
    cout << words[a1] << " " << words[a2] << '\n';
    cout << words[b1] << " " << words[b2] << '\n';
}

int main() {
    int n;
    cin >> n;

    // Initialize vowel lookup table
    vowel_code['a'] = 1;
    vowel_code['e'] = 2;
    vowel_code['i'] = 3;
    vowel_code['o'] = 4;
    vowel_code['u'] = 5;

    // Read and process each word
    for (int i = 1; i <= n; i++) {
        cin >> words[i];
        int vowel_count = 0;
        int last_vowel = 0;

        for (char c : words[i]) {
            if (vowel_code[c]) {
                vowel_count++;
                last_vowel = vowel_code[c];
            }
        }

        // Try to form a perfect pair
        if (unused[vowel_count][last_vowel]) {
            perfect_pairs.emplace_back(unused[vowel_count][last_vowel], i);
            unused[vowel_count][last_vowel] = 0; // Mark as used
        } else {
            unused[vowel_count][last_vowel] = i; // Store as waiting
        }
    }

    // Now form semi-matching pairs (same vowel count, any last vowel)
    for (int vowel_count = 1; vowel_count < 1000000; vowel_count++) {
        int buffer = 0;
        for (int last_vowel = 1; last_vowel <= 5; last_vowel++) {
            if (unused[vowel_count][last_vowel]) {
                if (buffer) {
                    semi_pairs.emplace_back(buffer, unused[vowel_count][last_vowel]);
                    buffer = 0;
                } else {
                    buffer = unused[vowel_count][last_vowel];
                }
            }
        }
    }

    // Ensure we have enough semi pairs to go with perfect pairs
    while (semi_pairs.size() < perfect_pairs.size()) {
        semi_pairs.push_back(perfect_pairs.back());
        perfect_pairs.pop_back();
    }

    // Output number of lyrics
    cout << perfect_pairs.size() << '\n';

    // Each lyric = 2 pairs = 4 words
    for (int i = 0; i < perfect_pairs.size(); i++) {
        print_lyric(semi_pairs[i].first, perfect_pairs[i].first,
                    semi_pairs[i].second, perfect_pairs[i].second);
    }

    return 0;
}
