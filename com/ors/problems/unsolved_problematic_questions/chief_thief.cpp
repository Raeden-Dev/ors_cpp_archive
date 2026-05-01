// QUESTION LINK: https://toph.co/p/chief-thief

// UNSOLVED, the algorithm below isn't correct. And submission resulted in repeated wrong answers

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

    int t;
    cin >> t;

    vector<LL> nums(t);
    vector<LL> r(t);

    LL product = 1;

    for (int i = 0; i < t; i++) {
        cin >> nums[i];
        if (nums[i] != 0) {
            product = product * nums[i];
        }
    }

    for (int j = 0; j < t; j++) {
        if (nums[j] != 0) {
            r[j] = product / nums[j];
        } else {
            r[j] = 0;
        }
    }

    for (int s = 0; s < t; s++) {
        cout << r[s];
        if (s+1 != t) {
            cout << " ";
        }
    }

    return 0;
}