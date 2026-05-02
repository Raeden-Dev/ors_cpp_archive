// QUESTION LINK: https://toph.co/p/help-them

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

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> elements(n);
        map<int, int> ae;
        for (int j = 0; j < n; j++) {
            int s;
            cin >> s;
            elements[j] = s;
            ae[s] = j;
        }

        int min = *min_element(all(elements));
        int max = *max_element(all(elements));
        for (int k = min; k <= max; k++) {
            auto isFound = ae.find(k);
            if (isFound == ae.end()) {
                cout << k << "\n";
                break;
            }
        }
    }

    return 0;
}