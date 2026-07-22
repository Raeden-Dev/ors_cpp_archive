// QUESTION LINK: https://codeforces.com/problemset/problem/112/A
// Attempts taken: 1


#include <bits/stdc++.h>
using namespace std;

using LL = long long;
using ULL = unsigned long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;

const LL INF = 2e18;

#define nl "\n"
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define eps 1e-9
#define inf 0x3f3f3f3f
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())
#define Lower(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define Upper(a) transform(a.begin(), a.end(), a.begin(), ::toupper)

void solve() {

}

int main() {
    FastRead;

    string s1,s2;
    cin >> s1 >> s2;
    Lower(s1);
    Lower(s2);

    // Compares lexicographically if you directly compare like so
    if (s1 == s2) {
        cout << "0" << nl;
    }
    else if (s1 < s2) {
        cout << "-1" << nl;
    }
    else {
        cout << "1" << nl;
    }

    return 0;
}

// The solution provided below is wrong because it doesn't compare lexicographically.

// int main() {
//     FastRead;
//
//     string s1,s2;
//     cin >> s1 >> s2;
//     Lower(s1);
//     Lower(s2);
//
//     int a=0,b=0;
//     for (char i : s1) {
//         a+= i;
//     }
//     for (char i : s2) {
//         b+= i;
//     }
//     if (a == b) {
//         cout << "0" << nl;
//     }
//     else if (a < b) {
//         cout << "-1" << nl;
//     }
//     else {
//         cout << "1" << nl;
//     }
//
//     return 0;
// }