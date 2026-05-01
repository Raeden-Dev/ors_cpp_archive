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
    cout << "            SETS TUTORIAL               \n";
    cout << "========================================\n\n";

    // 1. Initializing and Adding
    set<int> nums;
    nums.insert(10);
    nums.insert(25);

    // C++20 only .contains
    bool has = nums.contains(30);

    // 2. Delete element
    nums.erase(25);

    // 3. Check if empty
    bool empty = nums.empty();

    // 4. Clear a set
    nums.clear();

}