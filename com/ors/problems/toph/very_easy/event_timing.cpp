// QUESTION LINK: https://toph.co/p/event-timing

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
        LL p,k,d;
        cin >> p >> k >> d;
        LL time = p + ((k / d) + 1) * d;

        cout << "Case " << i+1 << ": " << time << "\n";
    }

    return 0;
}