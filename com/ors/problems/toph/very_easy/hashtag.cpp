// QUESTION LINK: https://toph.co/p/hashtag

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

    string s;
    getline(cin, s);

    int spaces = count(all(s), ' ');
    if (spaces == 0) {
        cout << s << "\n";
        return 0;
    }
    string k = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') continue;
        k += s[i];
    }

    cout << k << "\n";

    return 0;
}