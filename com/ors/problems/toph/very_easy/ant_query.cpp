// QUESTION LINK: https://toph.co/p/ant-query

// UNSOLVED
// Although solution is correct and works, we hit CPU limit exceeded on submission.
// We need to use bitmask to solve this one, since I don't have proper knowledge on bitmask yet, I'll skip it for now

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

LL getDist(LL x1, LL x2, LL y1, LL y2, LL z1, LL z2) {
    return abs((x1 - x2)) + abs((y1 - y2) )+ abs((z1 - z2));
}

void solveCase(vector<vector<int>> dists) {
    int min = 0;
    for (int j = 0; j < dists.size(); j++) {
        for (int k = 0; k < j+1; k++) {
            vector<int> coord1 = dists[j];
            vector<int> coord2 = dists[k];
            LL dist = getDist(coord1[0], coord2[0], coord1[1], coord2[1], coord1[2], coord2[2]);
            if (dist > min) {
                min = dist;
            }
        }
        cout << min << "\n";
    }
}


int main() {
    FastRead;

    int t;
    cin >> t;

    vector<vector<int>> dists;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x,y,z;
            cin >> x >> y >> z;
            dists.push_back({x,y,z});
        }
        cout << "Case #" << i+1 << ":\n";
        solveCase(dists);
        dists.clear();
    }

    return 0;
}