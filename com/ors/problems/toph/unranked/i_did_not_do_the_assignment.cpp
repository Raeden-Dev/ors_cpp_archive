// QUESTION LINK: https://toph.co/p/i-did-not-do-the-assignment

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


bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    FastRead;

    int t;
    cin >> t;

    if (isPrime(t)) {
        cout << "NO PUNISHMENT\n";
    } else {
        for (int i = 0; i < t; i++) {
            cout << "I DID NOT DO THE ASSIGNMENT.\n";
        }
    }

    return 0;
}