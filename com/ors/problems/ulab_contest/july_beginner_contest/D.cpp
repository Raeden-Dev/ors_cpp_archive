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

int main() {
    FastRead;

    string s;
    cin >> s;

    map<char, int> oc;

    for (int i = 0; i < s.size(); i++) {
        oc[s[i]]++;
    }
    int k = 0;
    for (auto const& [c, n] : oc) {
        if (n >= 2) {
            k++;
        }
    }
    if (k >= 2) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }


    return 0;
}