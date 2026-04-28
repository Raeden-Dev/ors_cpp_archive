// QUESTION LINK: https://toph.co/p/find-prime

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

bool isPrime(int num) {
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int findPrimeBelow(int num) {
    for (int i = num; i > 0; i--) {
        if (isPrime(i) && i != num) {
            return i;
        }
    }
}
int findPrimeAbove(int num) {
    while (num++) {
        if (isPrime(num)) {
            return num;
        }
    }
}
int main() {
    FastRead;
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << findPrimeBelow(n) << " " << findPrimeAbove(n) << "\n";
    }

    return 0;
}