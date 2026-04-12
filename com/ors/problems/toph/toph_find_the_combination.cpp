// https://toph.co/p/find-the-combination

// Status: Incomplete

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    int n[tests];
    long long x[tests];
    long long nums[tests][];


    for(int i = 0; i < tests; i++) {
        cin >> n[i];
        cin >> x[i];

        for(int j = 0; j < n[i]; j++) {
            cin >> nums[i][j];
        }
    }

    return 0;
}