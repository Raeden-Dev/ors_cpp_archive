// QUESTION LINK: https://codeforces.com/problemset/problem/546/A
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

    int k,n,w; cin >> k >> n >> w;
    int total = 0;
    int required = 0;

    for (int i = 1; i <= w; i++) {
        required = required + (k*i);
    }

    total = required - n;

    if (total > 0) {
        cout << total << nl;
    } else {
        cout << 0 << nl;
    }

    return 0;
}