// QUESTION LINK: https://toph.co/p/circle-of-boltu

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

int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<pair<LL,LL>> coords(n);
        for (int j = 0; j < n; j++) {
            cin >> coords[j].first >> coords[j].second;
        }
        LL max = 0;
        for (int k = 0; k < n; k++) {
            pair<LL,LL> p1 = coords[k];
            for (int l = 0; l < n; l++) {
                pair<LL,LL> p2 = coords[l];
                LL dist = pow((p2.first - p1.first), 2) + pow((p2.second - p1.second), 2);
                if (dist > max) {
                    max = dist;
                }
            }
        }
        cout << "Case " << i+1 << ": " << max << "\n";
    }

    return 0;
}