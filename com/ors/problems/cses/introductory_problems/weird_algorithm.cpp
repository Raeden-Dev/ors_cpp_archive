// QUESTION LINK: https://cses.fi/problemset/task/1068

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

    long long k;
    cin >> k;

    cout << k << " ";
    while (k!=1) {
        if (k%2 == 0) {
            k = k / 2;
        } else {
            k = (k*3)+1;
        }
        cout << k << " ";
    }

     cout << "\n";

    return 0;
}