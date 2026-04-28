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
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())


bool canSolve(int h, int m, int req) {
    int deadline = 675; // 11:15
    int cur = (h * 60) + m;

    if (cur + req > deadline) {
        return false;
    }
    return true;
}

int main() {
    FastRead;

    string t;
    cin >> t;
    int n;
    cin >> n;

    if (t.size() == 4) {
        t = "0" + t;
    }
    int hr = stoi(t.substr(0,2));
    int min = stoi(t.substr(3,5));

    if (canSolve(hr, min, n)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}