#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "          CP TIME COMPLEXITY            \n";
    cout << "========================================\n\n";

    cout << R"(THE 1-SECOND RULE: A C++ program executes ~10^8 operations per second.
               Always check the max 'N' in the constraints before writing any code.

               1. O(1) - Constant Time
                  - Max N: Any size (10^18+)
                  - Use Cases: Math formulas, Parity checks, array index access, unordered_map lookups.

               2. O(log N) - Logarithmic Time
                  - Max N: 10^18
                  - Use Cases: Binary Search, Fast Exponentiation, GCD (Euclid's algorithm).

               3. O(sqrt(N)) - Square Root Time
                  - Max N: 10^14
                  - Use Cases: Prime checking, finding all divisors of a number, Mo's Algorithm.

               4. O(N) - Linear Time
                  - Max N: 10^7 to 10^8
                  - Use Cases: Single loops, Two-Pointers, Prefix Sums, Frequency Arrays.

               5. O(N log N) - Linearithmic Time
                  - Max N: 2 * 10^5 to 5 * 10^5 (The most common constraint on Codeforces)
                  - Use Cases: std::sort, Segment Trees, Binary Search on Answer, std::map / std::set.

               6. O(N^2) - Quadratic Time
                  - Max N: 4,000 to 5,000
                  - Use Cases: Two nested loops, 2D Dynamic Programming.

               7. O(N^3) - Cubic Time
                  - Max N: 400 to 500
                  - Use Cases: Three nested loops, 3D DP, Floyd-Warshall (All-Pairs Shortest Path).

               8. O(2^N) - Exponential Time
                  - Max N: 20 to 25
                  - Use Cases: Generating all subsets, Bitmask DP, Brute force recursion.

               9. O(N!) - Factorial Time
                  - Max N: 10 to 11
                  - Use Cases: Generating all permutations (std::next_permutation).
               )";

    cout << "\n========================================\n";
    cout << "   CHECK MAX N BEFORE YOU START TYPING! \n";
    cout << "========================================\n";

    return 0;
}