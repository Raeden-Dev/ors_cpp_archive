// QUESTION LINK: https://toph.co/p/collectors-problem

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

int main() {
    FastRead;

    long long n, m;
    cin >> n >> m;

    vector<long long> package(m);
    vector<long long> cost(m);
    vector<long long> net(m);
    vector<long long> last(m);

    for (int i = 0; i < m; i++) {
        cin >> package[i];
        net[i] = n * package[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> cost[i];
    }

    long long total = 0;
    for (int j = 0; j < n; j++) {
        long long d;
        cin >> d;
        total = total + d;
    }

    for (int x = 0; x < m; x++) {
        last[x] = (total - net[x]) - cost[x];
    }

    sort(rall(last));

    if (last[0] > 0) {
        cout << "Profit " << last[0] << "\n";
    }
    else if (last[0] < 0) {
        cout << "Loss " << abs(last[0]) << "\n";
    }
    else {
        cout << "Neutral\n";
    }

    return 0;
}