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
    cout << "           STACK HANDLING               \n";
    cout << "========================================\n\n";

    // 1. Declare
    stack<int> s;
    s.push(10);
    s.push(20);

    cout << "Top :" << s.top() << endl;

    s.pop(); // 20 is removed

    cout << "size: " << s.size() << endl;

    // DANGEROUS (Will crash if s is empty)
    if (s.top() == 5) {
        // Stuff
    }

    // Therefore use:
    // If s.empty() is true, C++ instantly stops reading and never checks s.top()
    if (!s.empty() && s.top() == 5) {
        // Stuff
    }


}