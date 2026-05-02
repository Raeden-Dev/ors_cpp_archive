// QUESTION LINK: https://toph.co/p/fibonacci-between

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

    LL l, r;
    cin >> l >> r;

    vector<LL> fibo;
    fibo.push_back(0);
    fibo.push_back(1);

    while (true) {
        LL next = fibo[fibo.size() - 1] + fibo[fibo.size() - 2];

        if (next > r) {
            break;
        }

        fibo.push_back(next);
    }

    fibo.erase(unique(all(fibo)), fibo.end());

    for (LL f : fibo) {
        if (f >= l && f <= r) {
            cout << f << "\n";
        }
    }
    return 0;
}