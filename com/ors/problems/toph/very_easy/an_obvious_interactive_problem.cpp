// QUESTION LINK: https://toph.co/p/an-obvious-interactive-problem

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
    int L = 0, R = 1000000;

    while (true) {
        int num = (L+R) / 2;
        cout << num << endl;

        string s;
        cin >> s;
        if (s == "Bigger") {
            L = num;
        }
        else if (s == "Smaller") {
            R = num;
        }
        else if (s == "Bingo!") {
            break;
        }
    }

    return 0;
}