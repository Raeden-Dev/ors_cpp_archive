// QUESTION SOURCE: https://toph.co/p/make-it-big
// Solved: No

// THIS IS A TRAP QUESTION, THE CODE BELOW IS NOT THE SOLUTION.

// Errors so far: Wrong answer on test 2 & 4, runtime error, cpu limit exceeded
// Please contact me if you have a solution for this. Thanks!

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    FastRead;

    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long k = 2;
        for (int i = 0; i < s.size(); i++) {
            if (k == 0) break;
            char curNum = s[i];
            int idx;
            for (int j = i+1; j < s.size(); j++) {
                if (curNum <= s[j]) {
                    curNum = s[j];
                    idx = j;
                }
            }
            if (curNum != s[i]) {
                swap(s[idx],s[i]);
                k--;
            }
        }

        cout << s + '\n';
    }

    return 0;
}