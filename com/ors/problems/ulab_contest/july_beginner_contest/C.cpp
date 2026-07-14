// QUESTION LINK:

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

    int t;
    cin >> t;
    vector<int> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int a = 0, b = 0, c=0;
    string s = "a";
    for (int i = 0; i < t; i++) {
        if (s == "a") {
            a+=arr[i];
            s="b";
        }
        else if (s == "b") {
            b+=arr[i];
            s="c";
        }
        else if (s == "c") {
            c+=arr[i];
            s="a";
        }
    }

    if (a > b && a > c) {
        cout << "chest" << "\n";
    }
    else if (b > a && b > c) {
        cout << "biceps" << "\n";
    } else {
        cout << "back" << "\n";
    }


    return 0;
}