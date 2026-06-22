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
    cout << "      ASCII NUMBER OF CHARACTERS        \n";
    cout << "========================================\n\n";

    // Letter to ASCII
    char letter = 'A';
    int ascii_number = letter;
    cout << "The ASCII value of " << letter << " is " << (int)letter << "\n";

    // ASCII to letter
    char newLetter = ascii_number;
    cout << "The letter for ASCII " << ascii_number << " is " << (char)ascii_number << "\n";

}