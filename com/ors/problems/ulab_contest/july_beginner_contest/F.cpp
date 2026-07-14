// QUESTION LINK:

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

    int t, k=0;
    cin >> t;
    vector<int> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < t-1; i++) {
        int a = arr[i+1], b = arr[i-1];
        int c = arr[i];
        if (c > a && c > b) {
            continue;
        }
        else if (c < a && c < b) {
            continue;
        }
        else {
            k++;
        }
    }
    cout << k << "\n";
    return 0;
}