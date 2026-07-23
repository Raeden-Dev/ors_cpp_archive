// QUESTION LINK: https://codeforces.com/problemset/problem/266/A
// Attempts taken:


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

    int t, k=0;
    cin >> t;

    string s; cin >> s;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i+1]) {
            k++;
        }
    }

    cout << k << nl;

    return 0;
}