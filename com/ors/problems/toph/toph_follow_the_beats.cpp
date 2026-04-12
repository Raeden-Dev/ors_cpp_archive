// https://toph.co/p/follow-the-beats

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
    int beatCount = 0;
    string beatStr;
    cin >> beatStr;
    beatStr = beatStr.substr(0, 100);
    for(char c : beatStr) {
        if(c == '.') {
            if(beatCount != 0) {
                beatCount--;
            }
        } else {
            if(beatCount != 10) {
                beatCount++;
            }
        }
        
        cout << beatCount << endl;
    }
    return 0;
}