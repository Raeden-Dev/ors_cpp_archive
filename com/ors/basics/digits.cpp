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


// IF YOU ARE DEALING WITH HUGE ASS NUMBERS greater than 10^18 then use this, you always have to use strings in that case
// Case #1: 9
// Case #2: 45666664777412335425321458888
// Case #3: 47895449787555332140087

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

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "           GETTING DIGITS               \n";
    cout << "========================================\n\n";

    int num = 12;
    // To get the '2' in 12 you need to
    int ones_place = num % 10;
    // To get the '1' in 12 you need to
    int tens_place = num / 10;

    // 1. floor() - Pulls number down to the nearest whole integer
    cout << floor(2.1) << "\n"; // Output: 2
    cout << floor(2.9) << "\n"; // Output: 2

    // 2. ceil() - Pulls the number up to the nearest whole integer
    cout << ceil(2.1) << "\n"; // Output: 3
    cout << ceil(2.9) << "\n"; // Output: 3

    // 3. round() - rounds down if < 0.5 or rounds up if >= 0.5
    cout << round(2.4) << "\n"; // Output: 2
    cout << round(2.5) << "\n"; // Output: 3

    // Square root
    double a = 25.0;
    cout << sqrt(a) << "\n";

    double base = 2.0;
    double exponent = 3.0;
    cout << pow(base, exponent) << "\n";

    // Find the minimum among a bunch of numbers
    int k =  min({5, 4, 8});
    cout << "min: " << k << "\n";
    // Find the maximum among a bunch of numbers
    int l = max({5, 4, 8});
    cout << "max: " <<  l << "\n";


}