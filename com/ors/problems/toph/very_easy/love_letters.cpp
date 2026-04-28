// QUESTION LINK: https://toph.co/p/love-letters

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


bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        map<char, int> freq;
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = s.substr(0,n);
        for (char &c : s) {
            c = toupper(c);
        }
        for (char c : s) {
            freq[c]++;
        }

        int got = 0;
        cout << "Case " << i+1 << ":\n";
        for (auto const&[name, count] : freq) {
            if (isPrime(count) && count != 1) {
                cout << name << " = " << count << "\n";
                got++;
            }
        }
        if (got == 0) {
            cout << "Love is painful !\n";
        }
    }

    return 0;
}