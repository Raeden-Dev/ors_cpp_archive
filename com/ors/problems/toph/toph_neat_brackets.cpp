// https://toph.co/p/neat-brackets

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    string input;
    int opened = 0, o = 0, c = 0;
    bool opening = false, isValid = true;

    input = input.substr(0, 25);

    cin >> input;

    for(char ch : input) {
        if(ch == '(') {
            opened++;
            o++;
        }
        else if(ch == ')' && opened > 0) {
            opened--;
            c++;
        } else {
            isValid = false;
            break;
        }
    }

    if(o != c && isValid) {
        isValid = false;
    }

    if(isValid == true) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}