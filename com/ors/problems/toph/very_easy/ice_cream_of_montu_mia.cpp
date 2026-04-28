// QUESTION LINK: https://toph.co/p/ice-cream-of-montu-mia

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

    int t, a, b, c;
    cin >> t >> a >> b >> c;

    bool canBuy = false;

    if (t - a >= 10 || t - b >= 10 || t - c >= 10) {
        canBuy = true;
    }

    if (canBuy) {
        cout << "Yes :-D" << "\n";
    } else {
        cout << "No :-(" << "\n";
    }

    return 0;
}