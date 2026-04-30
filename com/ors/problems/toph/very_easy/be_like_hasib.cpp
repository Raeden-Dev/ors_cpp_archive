// QUESTION LINK: https://toph.co/p/be-like-hasib

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


LL binarySearch(LL max, LL target) {
    LL left = 1;
    LL right = max;

    LL iterations = 0;
    while (left < right) {
        iterations++;
        LL mid = left + (right - left) / 2;
        if (target <= mid) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    return iterations;
}

int main() {
    FastRead;

    LL n,x;
    cin >> n >> x;

    cout << binarySearch(n, x) << "\n";

    return 0;
}