// QUESTION LINK: https://toph.co/p/passwords

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

    string s;
    while (cin >> s) {
        bool hU = false, hL = false, hN = false;
        int pass = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isupper(s[i]) && !hU) hU = true;
            if (islower(s[i]) && !hL) hL = true;
            if (isdigit(s[i]) && !hN) hN = true;

            if (hU && hL && hN) {
                pass++;
                hU = false;
                hL = false;
                hN = false;
            }
        }
        cout << pass << "\n";
    }
    return 0;
}