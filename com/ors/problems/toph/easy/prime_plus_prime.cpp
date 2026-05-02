// QUESTION LINK: https://toph.co/p/prime-plus-prime

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

const int MAX = 9999991;
bitset<MAX> nums;
vector<int> primes;

bool isPrime(LL num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (LL i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    FastRead;
    int n;
    cin >> n;

    if (n == 2) {
        cout << "Yes\n";
    }
    else {
        if (isPrime(n+2)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}