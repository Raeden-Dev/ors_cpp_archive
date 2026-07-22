// QUESTION LINK: https://codeforces.com/problemset/problem/339/A
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

    string s; cin>>s;
    vi arr;
    for (int i = 0; i<s.size(); i++) {
        if (isdigit(s[i])) {
            int d = s[i] - '0';
            arr.push_back(d);
        }
    }
    sort(all(arr));

    string ns;
    for (int i = 0; i < arr.size(); i++) {
        ns+= to_string(arr[i]);
        if (i+1 != arr.size()) {
            ns+="+";
        }
    }

    cout << ns << nl;

    return 0;
}