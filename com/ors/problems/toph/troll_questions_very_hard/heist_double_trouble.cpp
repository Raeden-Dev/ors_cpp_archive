// QUESTION LINK: https://toph.co/p/heist-double-trouble

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

pair<LL, LL> getPayout(LL mi, LL mj, LL ci, LL cj) {
    pair<LL, LL> payout;
    payout.first = floor((mi+mj) / (ci+cj+1));
    payout.second = (mi+mj) % (ci+cj+1);

    return payout;
}

int main() {
    FastRead;

    LL n;
    cin >> n;

    vector<LL> banks(n);
    vector<LL> crews(n);
    vector<pair<LL, LL>> payouts;

    for (LL i = 0; i < n; i++) {
        cin >> banks[i];
    }

    for (LL i = 0; i < n; i++) {
        cin >> crews[i];
    }

    for (LL j = 0; j < n; j++) {
        for (LL k = j+1; k < n; k++) {
            payouts.push_back(getPayout(banks[j], banks[k], crews[j], crews[k]));
        }
    }

    LL p = 0, d = 0;
    for (int s = 0; s < payouts.size(); s++) {
        pair<LL, LL> w = payouts[s];
        if (w.first > p) {
            p = w.first;
            d = w.second;
        }
        else if (w.first == p) {
            if (w.second > d) {
                p = w.first;
                d = w.second;
            }
        }
    }
    cout << p << " " << d << "\n";
    return 0;
}