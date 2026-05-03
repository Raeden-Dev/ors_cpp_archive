// QUESTION LINK: https://toph.co/p/shuvo-noboborsho

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

    LL t;
    cin >> t;

    for (LL i = 0; i < t; i++) {
        LL n,m,s,k;
        cin >> n >> m >> s >> k;

        LL combo = n*m;
        LL canTry = k / s;

        LL final = 0;
        if (combo <= canTry) {
            final = combo;
        } else {
            final = canTry;
        }
        cout << final << "\n";
    }

    return 0;
}