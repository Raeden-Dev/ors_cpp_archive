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

int main() {
    FastRead;

    int n, m;
    cin >> n;
    double results[n];

    for (int i = 0; i < n; i++) {
        cin >> m;
        double sum = 0.0;
        for (int j = 0; j < m; j++) {
            double d;
            cin >> d;
            sum = sum + d;
        }

    }

    for (int s = 1; s <= n; s++) {
        cout << "Case " << s << ": " << results[s-1];
    }

    return 0;
}