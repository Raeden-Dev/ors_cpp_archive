// QUESTION LINK: https://toph.co/p/burrows-and-scofield

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

    string a,b;
    cin >> a >> b;
    int num = 0;

    for (char c1 : a) {
        if (isdigit(c1)) {
            num += (c1 - '0');
        }
    }

    for (char c2 : b) {
        if (isdigit(c2)) {
            num += (c2 - '0');
        }
    }

    cout << "\"" << num << "\"" << "\n";

    return 0;
}