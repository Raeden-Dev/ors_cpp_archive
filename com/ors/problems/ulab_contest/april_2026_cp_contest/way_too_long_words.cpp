#include <bits/stdc++.h>
using namespace std;

#define FASTREAD ios_base::sync_with_stdio(0);cin.tie(0)

int main() {
    FASTREAD;

    int n;
    cin >> n;
    string words[n];

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) {
            string newWord = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
            word = newWord;
        }
        words[i] = word;
    }
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
}