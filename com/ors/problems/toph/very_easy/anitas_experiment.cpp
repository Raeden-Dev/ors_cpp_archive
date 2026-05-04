// QUESTION LINK: https://toph.co/p/anita-s-experiment

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

int getSpecialDays(vector<int> days) {
    vector<int> idx;
    for (int i = 1; i < days.size() - 1; i++) {
        if (days[i-1] < days[i] && days[i] > days[i+1]) {
            idx.push_back(i);
        }
    }
    int max = 0;
    if (idx.size() >= 2) {
        for (int i = 0; i < idx.size() - 1; i++) {
            int current_dist = (idx[i+1] - idx[i]) - 1;
            if (max < current_dist) {
                max = current_dist;
            }
        }
    }
    return max;
}

int getTotalSame(vector<int> days) {
    map<int, int> freq;
    for (int i = 0; i < days.size(); i++) {
        freq[days[i]]++;
    }
    int s = 0;
    for (auto const& [a,b] : freq) {
        if (s < b) {
            s = b;
        }
    }

    return s;
}

string determineDay(vector<int> days) {
    string s = "";
    int specialDays = getSpecialDays(days);
    int totalSame = getTotalSame(days);

    if (totalSame == days.size()) {
       return "neutral";
    }

    // All good days?
    int gDayCount = 0;
    for (int i = 0; i < days.size() - 1; i++) {
        if (days[i+1] >= days[i]) {
            gDayCount++;
        }
    }
    if (gDayCount == days.size() - 1) {
        s = "allGoodDays";
    }
    // All bad days?
    if (s.empty()) {
        int bDayCount = 0;
        for (int i = 0; i < days.size() - 1; i++) {
            if (days[i+1] <= days[i]) {
                bDayCount++;
            }
        }
        if (bDayCount == days.size() - 1) {
            s = "allBadDays";
        }
    }

    if (s.empty()) {
        if (specialDays >= 2) {
            s = to_string(specialDays);
        }
    }

    if (s.empty()) {
        s = "none";
    }

    return s;
}

int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> days(n);
        for (int j = 0; j < n; j++) {
            cin >> days[j];
        }

        cout << determineDay(days) << "\n";
    }

    return 0;
}