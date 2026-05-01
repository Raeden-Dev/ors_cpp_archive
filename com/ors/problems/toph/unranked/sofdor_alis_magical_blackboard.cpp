// QUESTION LINK: https://toph.co/p/sofdor-alis-magical-blackboard

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

    for (LL i = 0; i < t; i++) {
        LL x,y, r=0;
        cin >> x >> y;

        for (LL j = 0; j < y; j++) {
            r += x;
        }

        cout << r << "\n";
    }

    return 0;
}