// QUESTION LINK: https://toph.co/p/the-depressed-guy

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

    LL t;
    cin >> t;

    vector<LL> arr(t);
    map<LL, LL> l;
    set<LL> largest;

    for (LL i = 0; i < t; i++) {
        cin >> arr[i];
        auto target = l.find(arr[i]);
        if (target == l.end()) {
            l[arr[i]] = i;
        } else {
            LL size = (i - target->second) + 1;
            largest.insert(size);
        }

    }

    if (largest.empty()) {
        cout << 1 << "\n";
    } else {
        cout << *max_element(all(largest)) << "\n";
    }

    return 0;
}