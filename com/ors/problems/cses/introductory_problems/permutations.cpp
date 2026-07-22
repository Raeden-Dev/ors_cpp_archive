// QUESTION LINK: https://cses.fi/problemset/task/1070

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

    if (t==1) {
        cout << 1 << "\n";
    }
    else if (t <= 3) {
        cout << "NO SOLUTION\n";
    } else {
        for (int i = 2; i <= t; i=i+2) {
            cout << i << ' ';
        }
        for (int i = 1; i <= t; i=i+2) {
            cout << i << ' ';
        }
        cout << "\n";
    }


    return 0;
}