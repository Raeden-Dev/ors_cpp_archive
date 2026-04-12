// Package that contains libraries commonly used for CP
#include <bits/stdc++.h>
using namespace std;

// #define is used to make terms shorter for faster typing
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define ULL unsigned long long
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
#define INF 2e18
#define all(a) a.begin(),a.end()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

int main() {
    FastRead;

    cout << "========================================\n";
    cout << "         CP HEADERS TUTORIAL            \n";
    cout << "========================================\n\n";

    // Using C++ Raw String Literals (R"(...)") makes printing multi-line text much cleaner!
    cout << R"(1. <bits/stdc++.h>
        - What it is: A massive header file that includes almost every standard C++ library (iostream, vector, algorithm, math, etc.).
        - Why we use it: Saves time. Instead of typing 15 #include lines, you just type one.
        - Warning: It increases compile time slightly, but in CP, we only care about execution time, so it's a worthwhile trade.

        2. FastRead (ios_base::sync_with_stdio(0); cin.tie(0);)
        - What it does: Disconnects C++ streams (cin/cout) from C streams (scanf/printf) and unties cin from cout.
        - Why we use it: Prevents Time Limit Exceeded (TLE) errors. C++ I/O is slow by default because it synchronizes with C. This makes `cin` and `cout` as fast as (or faster than) `scanf` and `printf`.

        3. eps (1e-9)
        - What it is: 10 to the power of -9 (0.000000001).
        - Why we use it: Floating-point numbers are imprecise. `0.1 + 0.2` might equal `0.3000000000004`.
        - Rule: Never use `a == b` for floats. Use `abs(a - b) < eps`.

        4. inf (0x3f3f3f3f) and INF (2e18)
        - What they are: Safe "Infinity" values for 32-bit (int) and 64-bit (LL) integers.
        - Why we use them:
          - `inf` (approx 1.06 x 10^9) fits in a standard integer. If you add `inf + inf`, it won't overflow into a negative number (unlike INT_MAX).
          - It can also be quickly initialized into arrays using `memset(arr, 0x3f, sizeof(arr))`.
          - `INF` is the same concept, but for `long long` variables (limits around 9 x 10^18).

        5. all(a)
        - What it is: Replaces `a.begin(), a.end()`.
        - Why we use it: Prevents typos and saves time. `sort(all(v))` is much faster to type during a contest than `sort(v.begin(), v.end())`.

        6. Unique(a)
        - What it is: Sorts a vector, then removes all duplicate elements, resizing the vector perfectly.
        - Why we use it: C++'s built-in `unique` function doesn't actually delete elements; it just moves garbage to the back. This macro sorts, finds the unique elements, and `.erase()` chops off the garbage at the end.
        )";

    return 0;
}