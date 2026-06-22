// QUESTION LINK: https://codeforces.com/problemset/problem/1077/C

// TIME LIMIT EXCEEDED ON TEST 4

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

bool checkInd(vector<int> arr, int n) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i == n) continue;
        sum += arr[i];
    }
    int nSum = 0;
    int target = sum / 2;
    for (int i = 0; i < arr.size(); i++) {
        if (i == n) continue;
        if (arr[i] == target) continue;
        nSum += arr[i];
    }
    if (nSum == target) {
        return true;
    }

    return false;
}

int main() {
    FastRead;

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ind = 0;
    vector<int> rind;
    for (int j = 0; j < arr.size(); j++) {
        bool good = checkInd(arr, j);
        if (good) {
            ind++;
            rind.push_back(j+1);
        }
    }

    cout << ind << "\n";
    for (int k = 0; k < rind.size(); k++) {
        cout << rind[k] << " ";
    }

    return 0;
}