#include <bits/stdc++.h>
using namespace std;

#define FASTREAD ios_base::sync_with_stdio(0);cin.tie(0)

int multiple(int x, int max) {
    int sum = 0;
    for (int i = x; i <= max; i=i+x) {
        sum += i;
    }
    return sum;
}

int main() {
    FASTREAD;

    int n;
    cin >> n;
    int maxNum[n];

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int sum = 0;
        for (int j = 2; j <= x; j++) {
            int mult = multiple(j, x);
            if (sum < mult) {
                maxNum[i] = j;
                sum = mult;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << maxNum[i] << endl;
    }
}