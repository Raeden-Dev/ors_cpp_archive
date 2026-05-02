// QUESTION LINK: https://toph.co/p/shukran-s-dilemma

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

    int x,a,b;
    cin >> x >> a >> b;

    if (x < a && x < b) {
        cout << "batash khabo!\n";
    } else {
        int coke = x / b;
        if (x < a) {
            coke = x / b;
            if (coke > 0) {
                cout << coke << " coke khabo!\n";
            }
        } else {
            int pizza = x / a;
            x = x - (pizza * a);
            cout << pizza << " pizza khabo!\n";
            if (x >= b) {
                coke = x / b;
                if (coke > 0) {
                    cout << coke << " coke khabo!\n";
                }
            }

        }
    }

    return 0;
}