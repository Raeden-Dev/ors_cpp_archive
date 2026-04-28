// QUESTION LINK: https://toph.co/p/the-titan

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

    int n;
    cin >> n;
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    cout << sum << endl;

    return 0;
}