// QUESTION LINK:

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

const int MAX = 8500000;
bitset<MAX> nums;
vector<int> primes;

void getPrimes() {
    nums.set();
    nums[0] = nums[1] = 0;

    for (long long i = 2; i < MAX; i++) {
        if (nums[i]) {
            primes.push_back(i);

            for (long long j = i*i; j < MAX; j += i) {
                nums[j] = 0;
            }
        }
    }
}

int main() {
    FastRead;
    getPrimes();

    int t;
    cin >> t;
    cout << primes[t-1] << "\n";

    return 0;
}