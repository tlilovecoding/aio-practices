#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string word;
        int p;
        cin >> word >> p;
        
        // Calculate total ASCII value of the word
        int total = 0;
        for(char c : word) {
            total += int(c)-96;
        }
        string word2 = word;
        // Sort the word in descending order based on ASCII value
        sort(word.begin(), word.end(), greater<char>());
        
        int ptr = 0;
        while(total > p && ptr < word.size()) {
            total -= (int(word[ptr]) - 96);
            for(int i = 0; i < word2.size(); i ++){
                if(word2[i] == word[ptr]){
                    word2[i] = '.';
                }
            }
            ptr++;
        }
        for(int i = 0; i < word2.size(); i++){
            if(word2[i] != '.'){
                cout<<word2[i];
            }
        }
        
        cout <<endl;
    }
    return 0;
}
