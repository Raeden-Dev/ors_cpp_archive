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

string clean(string s) {
    for (int i = 0; i<s.size(); i++) {
        s[i] = tolower(s[i]);
        if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == ' ') {
            s.erase(i,1);
            i = i - 1;
        }
    }
    return s;
}

int main() {
    FastRead;

    string s, r;
    while (getline(cin, s)) {
        if (s == "DONE") continue;
        s = clean(s);
        r = s;
        reverse(all(r));
        if (r == s) {
            cout << "You won't be eaten!" << "\n";
        } else {
            cout << "Uh oh.." << "\n";
        }
    }
    return 0;
}