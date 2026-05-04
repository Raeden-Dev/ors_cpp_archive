// QUESTION LINK: https://toph.co/p/metro-rail-blocks

// UNSOLVED, can't figure out how I would keep track of previously inputted numbers

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

    vector<int> s(t);

    for (LL i = 0; i < t; i++) {
        cin >> s[i];
    }

    LL lf = 1;
     vector<bool> built(t+2, false);
    for (int i = 0; i < t; i++) {
        s[i] = built[i];
    }

    // 1 3 5 2 4
    // 1 1 1 3 5

    return 0;
}

