// https://toph.co/p/closest-pair

#include <iostream>
#include <cctype>
#include <string>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;

double getDist(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

array<int, 2> strToInt(string str) {
    array<int, 2> xyVals;
    int idx = 0;
    string valBuilder = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ',') {
            xyVals[idx++] = stoi(valBuilder);
            valBuilder = "";
            continue;
        }

        valBuilder += str[i];
    }

    xyVals[idx] = stoi(valBuilder);

    return xyVals;
}

int main() {
    int cases;

    cin >> cases;

    string points[cases];

    int curIdx = 0;
    vector<double> values;

    // Get all coords
    for(int i = 0; i < cases; i++) {
        int a, b;
        cin >> a >> b;
        points[i] = to_string(a) + "," + to_string(b);
    }

    // Store dists between all
    for(int j = 0; j < cases; j++) {
        array<int, 2> arr1 = strToInt(points[j]);
        for(int k = 0; k < cases; k++) {
            if(k == j) {
                continue; // skip distance between same coord
            }

            array<int, 2> arr2 = strToInt(points[k]);

            double dist = getDist(arr1[0], arr2[0], arr1[1], arr2[1]);

            string usingIdx = to_string(j) + "," + to_string(k);

            values.push_back(dist);
            curIdx++;
        }
    }
    // Find smallest dist
    double smallest = values[0];

    for(int n = 0; n < curIdx; n++) {
        if(values[n] < smallest) {
            smallest = values[n];
        }
    }

    cout << fixed << setprecision(14) << smallest;



    return 0;
}