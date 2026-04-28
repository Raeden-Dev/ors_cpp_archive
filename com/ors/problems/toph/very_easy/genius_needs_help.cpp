// QUESTION LINK: https://toph.co/p/genius-needs-help

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

string addBigStrings(string num1, string num2) {
    string result = "";
    int i = (int)num1.size() - 1;
    int j = (int)num2.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += (num1[i] - '0');
            i--;
        }
        if (j >= 0) {
            sum += (num2[j] - '0');
            j--;
        }
        result += to_string(sum % 10);
        carry = sum / 10;
    }
    reverse(all(result));

    return result;
}

int main() {
    FastRead;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a,b;
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << addBigStrings(a, b) << "\n";
    }
    return 0;
}