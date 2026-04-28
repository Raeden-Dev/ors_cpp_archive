#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "             MAP HANDLING               \n";
    cout << "========================================\n\n";

    // 1. Initializing and Adding
    map<string, int> scores;
    scores["aziz"] = 50;
    scores["sadman"] = 5;
    scores["nafees"] = 10;

    // 2. Updating value
    scores["aziz"] += 10;
    cout << "Score of Aziz: " << scores["aziz"] << "\n";
    cout << "Score of Tanvir: " << scores["tanvir"] << "\n\n"; // Doesn't exist, so C++ creates one automatically and assigns default value of 0

    // 3. Checking if a key is present in a map
    if (scores.count("aziz")) {
        cout << "Azizul is present in the map" << "\n\n";
    }
    if (scores.count("Akib")) {
        cout << "Akib is present in the map" << "\n";
    } else {
        cout << "Akib isn't present in the map" << "\n\n";
    }

    // 4. Alternate way of checking if a key is present in map
    auto findAziz = scores.find("aziz");
    if (findAziz != scores.end()) cout << "Azizul's score is: " << findAziz->second << "\n\n";

    // 5. Iterating through a map
    map<int, string> rankings;
    rankings[3] = "Bronze";
    rankings[1] = "Gold";
    rankings[2] = "Silver";

    // Notice we use 'auto const&' to read by reference (faster, prevents copying memory)
    for (auto const& [rank, medal] : rankings) {
        cout << rank << " Place: " << medal << "\n";
    }
    /* OUTPUT IS AUTOMATICALLY SORTED BY THE INTEGER KEY:
       1 Place: Gold
       2 Place: Silver
       3 Place: Bronze
    */

    // 6. Tracking frequency of numbers
    // Array of massive numbers
    vector<long long> arr = {1000000000000, 5, 1000000000000, 5, 5};
    // Map tracks Number -> Frequency
    map<long long, int> freq;
    for (long long num : arr) {
        freq[num]++; // Instantly increments the count!
    }
    for (auto const& [num, count] : freq) {
        cout << num << " appears " << count << " times.\n";
    }
}