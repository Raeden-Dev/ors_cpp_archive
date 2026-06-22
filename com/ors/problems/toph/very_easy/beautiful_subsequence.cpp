// QUESTION LINK: https://toph.co/p/beautiful-subsequence

// Unsolved, feels hard for me.

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

// Increase
// Decrease
// Increase then Decrease
// Decrease then Increase

string getType(vector<char> c) {
    int start = c[0];
    int middle = c[(c.size() / 2) - 1];
    int last = c[c.size() - 1];
    if (start < middle && middle < last) {
        return "inc";
    }
    if (start < middle && middle > last) {
        return "incdec";
    }
    if (start > middle && middle < last) {
        return "decinc";
    }
    if (start > middle && middle > last) {
        return "dec";
    }
}

int inc(vector<char> c) {
    int l = 0;
    for (int i = 0; i < c.size() - 1; i++) {
        int c1 = c[i];
        int c2 = c[i+1];
        if (c1 > c2) {
            continue;
        } else {
            l++;
        }
    }
    // for first letter
    if (c[c.size() - 1] > c[c.size() - 2]) l++;
    return l;
}

int dec(vector<char> c) {
    int l = 0;
    for (int i = 1; i < c.size(); i++) {
        int c1 = c[i];
        int c2 = c[i-1];
        if (c1 > c2) {
            continue;
        } else {
            l++;
        }
    }
    // for first letter
    if (c[0] > c[1]) l++;
    return l;
}

int incdec(vector<char> c) {
    cout << "incdec\n";
    int l = 0;
    int last = 0;
    set<char> n;
    for (int i = (c.size() / 2) - 1; i > 0; i--) {
        cout << "c[i] = " << c[i] << " | c[i+1] = " << c[i-1] << "\n";
        int c1 = c[i];
        int c2 = c[i-1];
        if (last == 0) {
            if (c1 > c2) {
                cout << "c[i] = " << c[i] << " | c[i+1] = " << c[i-1] << " ++++ \n";
                n.insert(c1);
            } else {
                last = c1;
                continue;
            }
        } else {
            if (last > c2) {
                char cLast = last;
                cout << "c[i] = " << cLast << " | c[i+1] = " << c[i-1] << " ++++ \n";
                last = 0;
                n.insert(cLast);
                l++;
            } else {
                last = c2;
                continue;
            }
        }
    }
    last = 0;
    cout << "SECOND\n";
    for (int i = c.size() / 2; i < c.size() - 1; i++) {
        cout << "c[i] = " << c[i] << " | c[i+1] = " << c[i+1] << "\n";
        int c1 = c[i];
        int c2 = c[i+1];
        if (last == 0) {
            if (c1 > c2) {
                cout << "c[i] = " << c[i] << " | c[i+1] = " << c[i+1] << " ++++ \n";
                n.insert(c1);
            } else {
                last = c1;
                continue;
            }
        } else {
            if (last > c2) {
                char cLast = last;
                cout << "c[i] = " << cLast << " | c[i+1] = " << c[i+1] << " ++++ \n";
                last = 0;
                n.insert(cLast);
            } else {
                last = c2;
                continue;
            }
        }
    }
    // for last letter
    if (c[c.size() - 1] < c[c.size() - 2]) l++;

    cout << "S size = " << n.size() << "\n";

    return l;
}

int decinc(vector<char> c) {
    cout << "decinc\n";
    int l = 0;
    for (int i = 1; i < c.size() / 2; i++) {
        int c1 = c[i];
        int c2 = c[i-1];
        if (c1 > c2) {
            continue;
        } else {
            l++;
        }
    }
    // for first letter
    if (c[0] > c[1]) l++;

    for (int i = 0; i < c.size() / 2; i++) {
        int c1 = c[i];
        int c2 = c[i+1];
        if (c1 > c2) {
            continue;
        } else {
            l++;
        }

        if (c[c.size() - 1] > c[c.size() - 2]) l++;
    }

    return l;
}

int main() {
    FastRead;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<char> chars(n);
        for (int j = 0; j < n; j++) {
            cin >> chars[j];
        }
        string action = getType(chars);
        int length = 0;
        if (action == "inc") {
            length = inc(chars);
        }
        else if (action == "dec") {
            length = dec(chars);
        }
        else if (action == "incdec") {
            length = incdec(chars);
        }
        else if (action == "decinc") {
            length = decinc(chars);
        }

        cout << length << endl;
    }

    return 0;
}