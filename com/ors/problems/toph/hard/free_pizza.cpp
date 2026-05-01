// QUESTION LINK: https://toph.co/p/free-pizza

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

    LL t;
    cin >> t;

    string prev;
    int row = 0;
    bool hasWon = false;
    for (LL i = 0; i < t; i++) {
        int x,y;
        cin >> x >> y;
        string s = to_string(x) + " " + to_string(y);
        if (i == 0) {
            prev = s;
            row = 1;
        } else {
            if (prev == s) {
                row++;
                if (row == 3) hasWon = true;
            } else {
                prev = s;
                row = 1;
            }
        }
    }

    if (hasWon) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}