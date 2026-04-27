// https://toph.co/p/goat-research

#include <iostream>
#include <cctype>
using namespace std;

int ACount(string input) {
    int aCnt = 0;
    for(char c : input) {
        if(c == 'a') {
            aCnt++;
        }
    }

    return aCnt;
}

int requiredSpaces(int maxS, string input) {
    int numberOfA = ACount(input);

    return maxS - numberOfA;
}


int main() {
    int n, h_s = 0;

    cin >> n;

    string sounds[n];
    string sounds_organized[n];

    for(int ip = 0; ip < n; ip++) {
        cin >> sounds[ip];
    }

    // even out As
    for(int j = 0; j < n; j++) {
        string gs = sounds[j];
        int aCnt = ACount(gs);

        if(aCnt % 2 == 0) {
            sounds_organized[j] = gs;
        } else if(aCnt == 1) {
            gs += 'a';
            sounds_organized[j] = gs;
        } else {
            sounds_organized[j] = gs.substr(0, aCnt);
        }

    }

    // Determine max 'a'
    for(int i = 0; i < n; i++) {
        sounds_organized[i] = sounds_organized[i].substr(0, 20);
        string sound = sounds_organized[i].substr(1, 20);

        if(h_s < sound.length()) {
            h_s = sound.length();
        }
    }

    for(int k = 0; k < n; k++) {
        string s = sounds_organized[k];
        for(int space = 0; space < requiredSpaces(h_s, s) / 2; space++) {
            cout << " ";
        }
        cout << s << endl;
    }


    return 0;
}