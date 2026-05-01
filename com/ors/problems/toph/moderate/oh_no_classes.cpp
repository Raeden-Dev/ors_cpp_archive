// QUESTION LINK: https://toph.co/p/oh-no-classes

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

int getMissingClassHours(vector<pair<int,int>> times, int min, int max) {
    set<int> cT;
    for (int i = 0; i < times.size(); i++) {
        pair<int,int> a = times[i];
        for (int j = a.first; j <= a.second; j++) {
            cT.insert(j);
        }
    }
    int missing = 0;
    for (int i = min; i < max; i++) {
        if (cT.find(i) == cT.end()) {
            missing++;
        }
    }
    return missing;
}


int main() {
    FastRead;

    int t;
    cin >> t;

    vector<pair<int,int>> pairs(3);

    for (int i = 0; i < t; i++) {
        int a1,b1,a2,b2,a3,b3;
        int time = 0;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
        pairs[0] = {a1,b1};
        pairs[1] = {a2,b2};
        pairs[2] = {a3,b3};

        int minStart = min({a1,a2,a3});
        int maxEnd = max({b1,b2,b3});

        time = abs(maxEnd - minStart) + 1; // Assuming total elapsed time

        // If there is any break between classes it'll not count as class time
        int actualTime = time - getMissingClassHours(pairs, minStart, maxEnd);

        cout << actualTime << "\n";
    }

    return 0;
}