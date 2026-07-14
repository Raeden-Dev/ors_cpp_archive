// QUESTION LINK: https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

int main() {
    FastRead;

    string s;
    cin >> s;

    int longest = 0;
    int cur = 0;
    string iter;

    for (int i = 0; i < s.size(); i++) {
        string c = to_string(s[i]);
        if (iter.empty()) {
            iter = c;
        }
        if (c == iter) {
            cur++;
        } else {
            iter = c;
            cur = 1;
        }
        if (cur > longest) {
            longest = cur;
        }
    }

    cout << longest << "\n";

    return 0;
}