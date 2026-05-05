// QUESTION LINK: https://toph.co/p/candies

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

int main() {
    FastRead;

    LL n, k, curCandies = 0, curBags = 0;

    cin >> n >> k;

    vector<LL> bags(n);

    for (int i = 0; i < n; i++) {
        cin >> bags[i];
    }

    sort(rall(bags));

    for (int i = 0; i < n; i++) {
        curCandies += bags[i];
        curBags++;
        if (curCandies >= k) {
            break;
        }
    }

    if (curCandies < k) {
        cout << -1 << "\n";
    } else {
        cout << curBags << "\n";
    }

    return 0;
}