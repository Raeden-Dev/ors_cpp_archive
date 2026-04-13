#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(),a.end()

int main() {
    string s;
    cin >> s;
    cin.ignore();
    vector<int> nums;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            nums.push_back(s[i] - '0');
        }
    }
    sort(all(nums));

    string nS;
    for (int i = 0; i < nums.size(); i++) {
        nS += to_string(nums[i]);
        if (i < nums.size() - 1) {
            nS += '+';
        }
    }
    cout << nS;
}