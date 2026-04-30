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


int main () {
    FastRead;

    cout << "========================================\n";
    cout << "           VECTOR HANDLING              \n";
    cout << "========================================\n\n";

    int n = 10;

    // creates vector of n size
    vector<int> nums(n);

    // Finding smallest & largest element in a vector
    vector<int> k = {1, 2, 3, 4, 5};

    int smallest = *min_element(all(k));
    int largest = *max_element(all(k));

    cout << "s = " << smallest << " | l = " << largest << "\n";

    // Find a specfic element in vector
    int target = 4;

    auto getTarget = find(all(k), target);
    if (getTarget != k.end()) {
        int index = distance(k.begin(), getTarget); // How you get index
        cout << "Found the number " << target << " at index: " << index << "\n";
    } else {
        cout << "The number " << target << " is not in the vector.\n";
    }
}