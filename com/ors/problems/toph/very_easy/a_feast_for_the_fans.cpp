// QUESTION LINK: https://toph.co/p/a-feast-for-the-fans

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

vector<pair<string, int>> months = {{"January", 31},{"February", 28},{"March", 31},{"April", 30},{"May", 31},{"June", 30},{"July", 31},{"August", 31},{"September", 30},{"October", 31},{"November", 30},{"December", 31}};
int totalE = 67;

int parseDate(string s) {
    string month = "";
    int day = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            month = s.substr(0, i);
            day = stoi(s.substr(i, s.length()));
            break;
        }
    }
    int totalDays = day;
    for (auto const& [m, d] : months) {
        if (m == month) {
            break;
        }
        totalDays += d;
    }
    return totalDays;
}

string getSeason(int num) {
    if (num < 10) {
        return "0" + to_string(num);
    }
    return to_string(num);
}

string getRun(int day) {
    int remaining = (day - 1) % totalE + 1;

    string season = "";
    int episode = 0;

    if (remaining > 60 && remaining <= 67) {
        episode = remaining - 60;
        season = "S07E" + getSeason(episode);
    }
    else if (remaining > 50 && remaining <= 60) {
        episode = remaining - 50;
        season = "S06E" + getSeason(episode);
    }
    else if (remaining > 40 && remaining <= 50) {
        episode = remaining - 40;
        season = "S05E" + getSeason(episode);
    }
    else if (remaining > 30 && remaining <= 40) {
        episode = remaining - 30;
        season = "S04E" + getSeason(episode);
    }
    else if (remaining > 20 && remaining <= 30) {
        episode = remaining - 20;
        season = "S03E" + getSeason(episode);
    }
    else if (remaining > 10 && remaining <= 20) {
        episode = remaining - 10;
        season = "S02E" + getSeason(episode);
    }
    else {
        episode = remaining;
        season = "S01E" + getSeason(episode);
    }


    return season;
}

int main() {
    FastRead;
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        cout << getRun(parseDate(s)) << "\n";
    }

    return 0;
}