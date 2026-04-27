// QUESTION SOURCE: https://toph.co/p/make-it-big
// Solved: No

// THIS IS A TRAP QUESTION, THE CODE BELOW IS NOT THE SOLUTION.

#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    FastRead;

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        string maxStr = s;
        int len = (int)s.size();

        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (s[j] <= s[i]) continue;

                swap(s[i], s[j]);
                if (s > maxStr) maxStr = s;

                for (int x = 0; x < len; x++) {
                    for (int y = x + 1; y < len; y++) {
                        if (s[y] <= s[x]) continue;

                        swap(s[x], s[y]);
                        if (s > maxStr) maxStr = s;
                        swap(s[x], s[y]);
                    }
                }
                swap(s[i], s[j]);
            }
        }

        cout << maxStr << "\n";
    }

    return 0;
}