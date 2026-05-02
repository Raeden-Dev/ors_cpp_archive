// QUESTION LINK: https://toph.co/p/test-cases

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

    int n,cl,ml;
    cin >> n >> cl >> ml;

    string v = "AC";

    for (int i = 0; i < n; i++) {
        int d, cpu, mem;
        cin >> d >> cpu >> mem;
        if (cpu > cl) {
            if (v == "AC") v = "CLE";
        }
        if (mem > ml) {
            if (v == "AC") v = "MLE";
        }
        if (d != 0) {
            if (v == "AC") v = "WA";
        }
    }

    cout << v << "\n";

    return 0;
}