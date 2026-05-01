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


vector<int> getVersion2(string s) {
    vector<int> v;
    stringstream ss(s);
    string token;

    // Read from 'ss' into 'token', stopping every time you hit a '.'
    while (getline(ss, token, '.')) {
        v.push_back(stoi(token));
    }

    return v;
}

int main() {
    FastRead;

    // Both get version is to return a vector by parsing version like 10.50.22
    // This will return 10,50,22 as vector<int>
    // getVersion2 is shorter and provided by AI, while getVersion is the one that I wrote

    return 0;
}