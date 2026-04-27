// QUESTION LINK:

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

int main() {
    FastRead;

    int r,c;
    cin >> r >> c;

    string tree[r][c];
    int mangoCount = 0, caught = 0;
    map<string, string> mangoCoords;
    map<string, string> knapsackCoords;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "R = " << i << " | C = " << j << endl;
            string s;
            cin >> s;
            if (s == "O") {
                string x = to_string(i);
                string y = to_string(j);
                mangoCount++;
                mangoCoords.insert({x, y});
            }
            if (s == "=") {
                string x = to_string(i);
                string y = to_string(j);
                knapsackCoords.insert({x, y});
            }
        }
    }

    for (auto const& [y1, x1] : mangoCoords) {
        auto isCaught = knapsackCoords.find(y1);
        if (isCaught != knapsackCoords.end()) {
            if (isCaught->second > x1) {
                caught++;
            }
        }
    }

    cout << caught << endl;

    return 0;
}