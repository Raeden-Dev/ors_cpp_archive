// QUESTION LINK: https://toph.co/p/if-else-eat

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

    long long r,c;
    cin >> r >> c;

    if (r > 2000) {
        if (c > 1000) {
            cout << "Quantum Pizza\n";
        }
        else if (c >= 1 && c <= 1000) {
            cout << "Neural Noodles\n";
        }
        else {
            cout << "Compiler Water\n";
        }
    } else {
        if (c > 1000) {
            cout << "Buggey Burger\n";
        }
        else if (c >= 1 && c <= 1000) {
            cout << "Logic Lemonade\n";
        }
        else {
            cout << "Null Soup\n";
        }
    }


    return 0;
}