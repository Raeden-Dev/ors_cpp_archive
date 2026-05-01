// QUESTION LINK: https://toph.co/p/game-of-tic-tac-toe

// UNSOLVED, This one is a bit tricky. Possible need the use of bitmask
// Fails on test case 3

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

bool isWinningMove(int x, int y) {

}

int totalX(string s) {
    return count(all(s), 'X');
}

int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int x = totalX(s) + 1;
        if (x % 2 == 0) {
            cout << "Game #" << i+1 << ": " << "Bob\n";
        } else {
            cout << "Game #" << i+1 << ": " << "Alice\n";
        }
    }


    return 0;
}