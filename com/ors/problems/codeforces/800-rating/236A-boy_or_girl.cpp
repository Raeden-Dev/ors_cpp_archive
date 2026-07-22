// QUESTION LINK: https://codeforces.com/problemset/problem/236/A
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

void solve() {

}

int main() {
    FastRead;

    string s;cin>>s;
    Unique(s);
    if (s.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << nl;
    } else {
        cout << "IGNORE HIM!" << nl;
    }

    return 0;
}