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
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

bool isBeat(string s, int idx) {
    if (idx + 2 < s.size()) {
        if (s[idx] == 'W' && s[idx+1] == 'U' && s[idx+2] == 'B') {
            return true;
        }
    }
    return false;
}

int main() {
    FastRead;

    string s;
    cin >> s;
    int idx=0;
    string k;
    for (int i = 0; i < s.size(); i++) {
        if (isBeat(s, i)) {
            s.erase(i, 3);
            i = i - 1;
        } else {
            k+=s[i];
            if (i+3 != s.size()) {
                if (s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B') {
                    k+=" ";
                }
            }
        }
    }

    cout << k << "\n";

    return 0;
}