#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend() // ADDED: The Reverse All macro

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "         CP SORTING TUTORIAL            \n";
    cout << "========================================\n\n";

    // 1. VECTORS
    vector<int> nums = {5, 12, 31, 323, 2, 6, 1, 0, 23, 11};
    sort(all(nums));            // Ascending: 0, 1, 2, 5...
    sort(rall(nums));           // Descending: 323, 31, 23...
    reverse(all(nums));         // Flips it back to Ascending in O(N) time

    //  2. PRIMITIVE ARRAYS 
    int nums2[5] = {69, 11, 21, 67, 39};
    sort(nums2, nums2 + 5); // Ascending

    int nums3[5] = {11, 66, 22, 55, 33};
    sort(nums3, nums3 + 5, greater<int>()); // Descending
    reverse(nums3, nums3 + 5);                    // Flips it back

    //  3. CUSTOM COMPARATORS (Lambdas) 
    vector<string> words = {"apple", "pi", "banana", "kiwi"};
    // Sort strings strictly by their length (shortest to longest)
    sort(all(words), [](string a, string b) {
        return a.length() < b.length();
    });

    //  4. SORTING PAIRS 
    vector<pair<int, int>> pairs = {{10, 2}, {10, 1}, {5, 3}};
    sort(all(pairs));  // Result: {5, 3}, {10, 1}, {10, 2}

    sort(all(pairs), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }); // Result: {10, 1}, {10, 2}, {5, 3}

    //  5. DEDUPLICATION (Must be sorted first!) 
    vector<int> dupes = {2, 1, 2, 3, 1, 4};
    sort(all(dupes)); // {1, 1, 2, 2, 3, 4}
    dupes.erase(unique(all(dupes)), dupes.end()); // Result: {1, 2, 3, 4}

    return 0;
}