// QUESTION LINK: https://toph.co/p/version-checker

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

vector<int> getVersion(string s) {
    vector<int> v;
    int lastDotIdx = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            string a = s.substr(lastDotIdx, i-lastDotIdx);
            v.push_back(stoi(a));
            lastDotIdx = i+1;
        }
    }
    string b = s.substr(lastDotIdx);
    if (!b.empty()) {
        v.push_back(stoi(b));
    }

    return v;
}

int main() {
    FastRead;

    string a,b;
    cin >> a >> b;
    bool aBig = false;

    vector<int> k1 = getVersion(a);
    vector<int> k2 = getVersion(b);

    if (k1[0] > k2[0]) {
        aBig = true;
    }
    else if (k1[0] == k2[0]) {
        if (k1[1] > k2[1]) {
            aBig = true;
        }
        else if (k1[1] == k2[1]) {
            if (k1.size() > k2.size()) {
                aBig = true;
            }
            else if (k1.size() == k2.size()) {
                if (k1[2] > k2[2]) {
                    aBig = true;
                }
            }
        }
    }


    if (aBig) {
        cout << a << "\n";
    } else {
        cout << b << "\n";
    }

    return 0;
}