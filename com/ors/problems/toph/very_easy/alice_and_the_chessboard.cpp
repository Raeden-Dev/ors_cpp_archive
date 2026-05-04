// QUESTION LINK: https://toph.co/p/alice-and-the-chessboard

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

// CHESS BOARD

// 1  2  3  4  5  6  7  8
// 2  o  o  o  o  o  o  o
// 3  o  o  o  o  o  o  o
// 4  o  o  o  o  o  o  o
// 5  o  x  o  o  o  o  o
// 6  o  o  o  o  o  o  o
// 7  o  o  o  o  o  o  o
// 8  o  o  o  o  o  o  o

vector<pair<int, int>> getAllPositions(int x, int y) {
    int ux = x, uy = y;
    vector<pair<int,int>> pos;
    // for d1
    while (ux > 0 && uy > 0) {
        pair<int,int> p;
        p.first = --ux;
        p.second = --uy;
        if (ux == 0 || uy == 0) break;
        pos.push_back(p);
    }
    ux = x, uy = y;
    // for d2
    while (ux < 9 && uy > 0) {
        pair<int,int> p;
        p.first = ++ux;
        p.second = --uy;
        if (ux == 9 || uy == 0) break;
        pos.push_back(p);
    }
    ux = x, uy = y;
    // for d3
    while (ux > 0 && uy < 9) {
        pair<int,int> p;
        p.first = --ux;
        p.second = ++uy;
        if (ux == 0 || uy == 9) break;
        pos.push_back(p);
    }
    ux = x, uy = y;
    // for d4
    while (ux < 9 && uy < 9) {
        pair<int,int> p;
        p.first = ++ux;
        p.second = ++uy;
        if (ux == 9 || uy == 9) break;
        pos.push_back(p);
    }
    return pos;
}


int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        vector<pair<int,int>> pos = getAllPositions(x1,y1);

        bool hasFound = false;
        for (pair<int,int> p : pos) {
            if (x2 == p.first && y2 == p.second) {
                cout << "Yes\n";
                hasFound = true;
                break;
            }
        }
        if (!hasFound) cout << "No\n";
    }

    return 0;
}