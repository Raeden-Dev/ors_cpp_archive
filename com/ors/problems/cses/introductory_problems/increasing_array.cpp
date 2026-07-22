// QUESTION LINK: https://cses.fi/problemset/task/1094/
// 1 wrong answer

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

    long long t,m=0;
    cin >> t;
    vector<int> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        if (i > 0) {
            if (arr[i-1] > arr[i]) {
                m+=arr[i-1] - arr[i];
                arr[i] = arr[i] + (arr[i-1] - arr[i]);
            }
        }
    }
    cout << m << "\n";

    return 0;
}