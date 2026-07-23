// QUESTION LINK: https://projecteuler.net/register

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

    int t;
    cin >> t;

    LL sum = 0;

    vector<LL> squared(t);

    for (int i = 0; i <= t; i++) {
        squared[i] = pow(i+1, 2);
    }

    for (int i = 0; i < t; i++) {
        if (squared[i] % 2 != 0) {
            sum += squared[i];
        }
    }

    cout << sum << endl;

    return 0;
}