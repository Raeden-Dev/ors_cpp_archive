// QUESTION LINK: https://cses.fi/problemset/task/1083

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

    int n;
    cin >> n;
    long long sum = 0, sum2 = 0;
    int arr1[n-1];

    for (int i = 0; i < n - 1; i++) {
        cin >> arr1[i];
        sum += arr1[i];
    }
    for (int i = 1; i <= n; i++) {
        sum2 += i;
    }

    cout << sum2 - sum << "\n";

    return 0;
}