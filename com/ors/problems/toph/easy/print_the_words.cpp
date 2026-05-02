// QUESTION LINK: https://toph.co/p/print-the-words

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

string getLowerCase(string s) {
    string lower_word = s;
    for (char &c : lower_word) {
        c = tolower(c);
    }

    return lower_word;
}

int main() {
    FastRead;

    string s;
    getline(cin, s);

    map<string, int> words;
    map<string, string> original_words;
    vector<string> parsed;

    string longest = "";
    string smallest = "";

    int lastSpace = 0;
    for (int i = 0; i <= s.size(); i++) {
        string word = "";
        if (i == s.size() || s[i] == ' ') {
            word = s.substr(lastSpace, i-lastSpace);
            lastSpace = i+1;

            if (word[word.size() - 1] == ',' || word[word.size() - 1] == '.' || word.back() == ';') {
                word.pop_back();
            }
            if (word.empty()) continue;

            if (longest.empty() || longest.size() < word.size()) {
                longest = word;
            }
            if (smallest.empty() || smallest.size() > word.size()) {
                smallest = word;
            }

            string lower_word = getLowerCase(word);
            words[lower_word]++;

            if (original_words.find(lower_word) == original_words.end()) {
                original_words[lower_word] = word;
                parsed.push_back(lower_word);
            }
        }
    }

    int max = 0;
    string repeated = "";
    for (string w : parsed) {
        if (max < words[w]) {
            max = words[w];
            repeated = original_words[w];
        }
    }

    cout << longest << "\n" << smallest << "\n" << repeated << "\n";

    return 0;
}