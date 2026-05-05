// QUESTION LINK: https://toph.co/p/x-sum

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

// s x s
// x c x
// s x s
// center = {1,1}

// s  x  x  x  x  s
// x  s  x  x  s  x
// x  x  s  s  x  x
// x  x  c  c  x  x
// x  s  x  x  s  x
// s  x  x  x  x  s
// center = 6/2 = 3 that is 0.. 1.. 2.. 3 {3, 3}
// second center for even = {2, 3} (-1 to original)

int main() {
    FastRead;

    int n;
    cin >> n;

    int mat[n][n];

    LL sum = 0;
    bool isEven = (n % 2 == 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    if (!isEven) {
        int center = floor(n/2);
        for (int i  = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[n-1-i][i];
        }
        sum -= mat[center][center];
    } else {
        for (int i  = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[n-1-i][i];
        }
    }

    cout << sum << "\n";


    return 0;
}