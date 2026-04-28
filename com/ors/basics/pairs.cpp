#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define all(a) a.begin(),a.end()
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "            PAIR HANDLING               \n";
    cout << "========================================\n\n";

    // 1. Initializing
    pair<int, int> p1;
    p1.first = 100;
    p1.second = 200;
    cout << p1.first << " " << p1.second << nl;

    // 2. Initialize it while creating
    pair<int, int> p2 = {69, 67};

    // 3. Vector of pairs
    vector<pair<int, int>> coordinates;
    coordinates.push_back({5,5});
    coordinates.emplace_back(10,10); // Faster, contructs pair directly in memory

    // 4. Sorting Pairs
    vector<pair<int, int>> v = {
        {10, 5},
        {2, 100},
        {10, 1}
    };

    sort(all(v));
    // Result:
    // {2, 100}  <-- Smallest .first
    // {10, 1}   <-- Tie-breaker: smaller .second wins!
    // {10, 5}

    // 5. Nested Pairs
    pair<int, pair<int, int>> nested;
    nested = {5, {2, 1}};
    cout << "First " << nested.first << " | Second.First " << nested.second.first << " | Second.Second " << nested.second.second << nl;

    // 6. Unpacking Pair in a loop

    vector<pair<string, int>> students = {{"Sadman", 23}, {"Azizul", 24}};
    for (auto [name, id] : students) {
        cout << "Name: " << name << " | ID: " << id << nl;
    }

}