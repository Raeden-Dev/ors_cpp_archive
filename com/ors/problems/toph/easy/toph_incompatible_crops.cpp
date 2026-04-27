// https://toph.co/p/incompatible-crops

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
    int r, c, safe_spots = 0;
    string plots[25][25];

    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        string input;
        int idx = 0;
        cin >> input;
        input = input.substr(0, c);

        for(char c : input) {
            plots[i][idx++] = c;
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int n = 0;
            string val = plots[i][j];

            if(val != ".") {
                continue;
            }

            // out of bounds X-
            if(j - 1 < 0) {
                n++;
            } else {
                string p1 = plots[i][j - 1];
                if(p1 == ".") {
                    n++;
                }
            }

            // out of bounds X+
            if(j + 1 >= c) {
                n++;
            } else {
                string p2 = plots[i][j + 1];
                if(p2 == ".") {
                    n++;
                }
            }

            // out of bounds Y-
            if(i - 1 < 0) {
                n++;
            } else {
                string p3 = plots[i - 1][j];
                if(p3 == ".") {
                    n++;
                }
            }

            // out of bounds Y+
            if(i + 1 >= r) {
                n++;
            } else {
                string p4 = plots[i + 1][j];
                if(p4 == ".") {
                    n++;
                }
            }


            if(n == 4) {
                safe_spots++;
            }

        }
    }

    cout << safe_spots << endl;

    return 0;
}