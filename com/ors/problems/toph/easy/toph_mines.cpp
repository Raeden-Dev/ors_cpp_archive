// https://toph.co/p/mines

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;

bool isMine(string c) {
    if(c == "*") {
        return true;
    }

    return false;
}

int main() {
    int rows, columns;

    string cells[10][10];
    string mRows[10];

    cin >> rows >> columns;

    for(int i = 0; i < rows; i++) {
        cin >> mRows[i];
    }

    for(int j = 0; j < rows; j++) {
        string s = mRows[j];
        s = s.substr(0, columns);
        for(int k = 0;k < columns; k++) {
            cells[j][k] = s[k];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            string cell = cells[i][j];
            int mines_around = 0;

            if(cell == ".") {
                // check up
                if(i - 1 >= 0) {
                    if(isMine(cells[i-1][j])) {
                        mines_around++;
                    }
                }

                // check up + left
                if(i - 1 >= 0 && j - 1 >= 0) {
                    if(isMine(cells[i-1][j-1])) {
                        mines_around++;
                    }
                }

                // check up + right
                if(i - 1 >= 0 && j + 1 < columns) {
                    if(isMine(cells[i-1][j+1])) {
                        mines_around++;
                    }
                }


                // check down
                if(i + 1 < rows) {
                    if(isMine(cells[i+1][j])) {
                        mines_around++;
                    }
                }

                // check down + left
                if(i + 1 < rows && j - 1 >= 0) {
                    if(isMine(cells[i+1][j-1])) {
                        mines_around++;
                    }
                }

                // check down + right
                if(i + 1 < rows && j + 1 < columns) {
                    if(isMine(cells[i+1][j+1])) {
                        mines_around++;
                    }
                }
                // check left
                if(j - 1 >= 0) {
                    if(isMine(cells[i][j-1])) {
                        mines_around++;
                    }
                }
                // check right
                if(j + 1 < columns) {
                    if(isMine(cells[i][j+1])) {
                        mines_around++;
                    }
                }




                // Put number in cell for number of mines
                if(mines_around > 0) {
                    cells[i][j] = to_string(mines_around);
                }

            }

            cout << cells[i][j];
        }

        cout << endl;

    }



    return 0;
}