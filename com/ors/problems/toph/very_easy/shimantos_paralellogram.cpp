// QUESTION LINK: https://toph.co/p/shimanto-s-parallelograms

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

    string p1 = "##########";
    string p2 = "#        #";
    string p3 = "#        #";
    string p4 = "##########";

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++) {
            if (j == 1) {
                cout << "   ";
            }
            cout << p1;
            if (j != n) {
                cout << " ";
            }
        }
        cout << "\n";
        for (int k = 1; k <= n; k++) {
            if (k == 1) {
                cout << "  ";
            }
            cout << p2;
            if (k != n) {
                cout << " ";
            }
        }
        cout << "\n";
        for (int l = 1; l <= n; l++) {
            if (l == 1) {
                cout << " ";
            }
            cout << p3;
            if (l != n) {
                cout << " ";
            }
        }
        cout << "\n";
        for (int m = 1; m <= n; m++) {
            cout << p4;
            if (m != n) {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}