// QUESTION LINK: https://toph.co/p/robin-s-birthday



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

    int t;
    cin >> t;

    string s;
    cin >> s;

    bool nc = false;

    for (int i = 1; i < t; i++) {
        if (s[i] == s[i-1]) {
            cout << "Change needed\n";
            nc = true;
            break;
        }
    }

    if (!nc) {
        cout << "No change needed\n";
    }

    return 0;
}