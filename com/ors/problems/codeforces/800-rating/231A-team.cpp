// QUESTION LINK: https://codeforces.com/problemset/problem/231/A
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

void solve(int& solved) {
    int a,b,c; cin >> a >> b >> c;
    if (a+b+c >= 2) {
        solved++;
    }
}

int main() {
    FastRead;

    int t;
    cin >> t;

    int solved = 0;

    while (t--) {
        solve(solved);
    }

    cout << solved << nl;

    return 0;
}