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
void insertionSort(vector<int>& arr) {
    // Start from 2nd index assuming 1st index is sorted
    for (int i = 1; i < arr.size(); i++) {
        // 2nd loop starts from i and starts looking backward up until 2nd index (2nd idx is at [1])
        for (int j = i; j > 0; j--) {
            // Compare value at current index with previous and swap if smaller
            if (arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "            INSERTION SORT              \n";
    cout << "========================================\n\n";

    vector<int> marr = {77, 2, 13, 27, 69, 3, 8, 67};

    cout << ">> Before sorting: ";
    printArr(marr);

    insertionSort(marr);

    cout << ">> After sorting: ";
    printArr(marr);
}