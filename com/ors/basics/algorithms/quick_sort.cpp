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

// Finding the pivot point of quick sort
int partitionArray(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Assume pivot as last element
    int i = low - 1; // Assume no low number is out of bounds (0 - 1 = -1)
    // Walk the array until pivot
    for (int j = low; j < high; j++) {
        // Check if a number is smaller than pivot
        if (arr[j] < pivot) {
            i++; // Add the number to smaller zone after expanding the smaller zone
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]); // swap the pivot point back into i+1
    return i+1; // return i+1
}

// MAKE SURE TO PASS Reference of array with the '&' in beginning
void quickSort(vector<int>& arr, int low, int high) {
    // Needs a stopping condition or else recursion will run infinitely
    if (low < high) {
        int pivotIndex = partitionArray(arr, low, high); // Find out pivot point
        // Recursive calls
        quickSort(arr, low, pivotIndex - 1); // Checking left
        quickSort(arr, pivotIndex + 1, high); // Checking right
    }
}

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "               QUICK SORT               \n";
    cout << "========================================\n\n";

    vector<int> marr = {52, 6, 12, 49, 15, 78, 33, 67};

    cout << ">> Before sorting: ";
    printArr(marr);

    quickSort(marr, 0, marr.size() - 1);

    cout << ">> After sorting: ";
    printArr(marr);
}