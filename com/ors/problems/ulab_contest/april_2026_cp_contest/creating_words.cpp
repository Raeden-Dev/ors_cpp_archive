#include <bits/stdc++.h>
using namespace std;

#define FASTREAD ios_base::sync_with_stdio(0);cin.tie(0)

int main() {
    FASTREAD;

    int n;
    cin >> n;
    cin.ignore();
    string words[n];

    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word);

        string l1 = word.substr(0, 1);
        string l2 = word.substr(4, 1);
        string swapped = l2 + word.substr(1, 2) + " " + l1 + word.substr(5, 2);

        words[i] = swapped;
    }
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
}