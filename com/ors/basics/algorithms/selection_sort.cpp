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

void printArr(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) cout << " ";
    }

    cout << "\n";
}

// MAKE SURE TO PASS Reference of array with the '&' in beginning
void selectionSort(vector<int>& arr) {
    // Two for loop, one for staying at current index and swapping if the next value being iterated is smaller
    for (int i = 0; i < arr.size() - 1; i++) {
        int cur_idx = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[cur_idx]) {
                cur_idx = j;
            }
        }
        // Selection sort performs exactly one swap by keeping track of the index with smallest value
        if (cur_idx != i) {
            swap(arr[cur_idx], arr[i]);
        }
    }
}

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "            SELECTION SORT              \n";
    cout << "========================================\n\n";

    vector<int> marr = {154, 33, 12, 556, 85, 27, 91, 2, 69, 11, 89, 90, 91, 22, 234, 256};

    cout << ">> Before sorting: ";
    printArr(marr);

    selectionSort(marr);

    cout << ">> After sorting: ";
    printArr(marr);
}