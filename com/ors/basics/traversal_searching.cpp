#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define all(a) a.begin(),a.end()

// ==========================================
// 1. TWO POINTERS - O(N) Time
// ==========================================
// Classic use case: Find if two numbers sum to a target in a SORTED array.
bool twoPointerSum(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) return true; // Found it!
        else if (current_sum < target) left++;  // Sum too small, move left pointer up
        else right--;                           // Sum too big, move right pointer down
    }
    return false;
}

// ==========================================
// 2. SLIDING WINDOW - O(N) Time
// ==========================================
// Classic use case: Find the maximum sum of any contiguous subarray of size 'k'.
int slidingWindowMaxSum(int arr[], int n, int k) {
    if (n < k) return -1; // Edge case

    int maxSum = 0, currentSum = 0;

    // Step 1: Initialize the first window
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Step 2: Slide the window across the array
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k]; // Add new element, drop the oldest element
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

// ==========================================
// 3. BINARY SEARCH - O(log N) Time
// ==========================================
// Classic use case: Find the index of a target number in a SORTED array.
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        // We do (right - left) to prevent integer overflow for massive arrays!
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;       // Target found
        if (arr[mid] < target) left = mid + 1;    // Target is on the right side
        else right = mid - 1;                     // Target is on the left side
    }
    return -1; // Target not in array
}

// ==========================================
// 4. BREADTH-FIRST SEARCH (BFS) - O(V + E) Time
// ==========================================
// Classic use case: Finding the Shortest Path in an unweighted graph.
// Uses a Queue (First-In, First-Out).
void breadthFirstSearch(int startNode, vector<vector<int>>& adj, int totalNodes) {
    vector<bool> visited(totalNodes, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // cout << "Visiting node: " << curr << "\n";

        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor); // Queue up the neighbor for later
            }
        }
    }
}

// ==========================================
// 5. DEPTH-FIRST SEARCH (DFS) - O(V + E) Time
// ==========================================
// Classic use case: Counting connected components, finding cycles, traversing trees.
// Uses Recursion (Call Stack acts as a Last-In, First-Out mechanism).
void depthFirstSearch(int curr, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[curr] = true;
    // cout << "Visiting node: " << curr << "\n";

    for (int neighbor : adj[curr]) {
        if (!visited[neighbor]) {
            depthFirstSearch(neighbor, adj, visited); // Dive deep instantly
        }
    }
}

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "       TRAVERSAL AND SEARCHING          \n";
    cout << "========================================\n\n";

    cout << R"(1. TWO POINTERS & SLIDING WINDOW
            - Use Sliding Window when searching for a CONTIGUOUS block (subarray) of a specific size.
            - Use Two Pointers when searching for PAIRS of elements, usually from opposite ends.

            2. BINARY SEARCH (The CP Superweapon)
            - Never use it on an unsorted array.
            - Can be used on arrays, but also to "Binary Search the Answer" over a massive range of numbers.
            - C++ has built-in binary search functions: binary_search(), lower_bound(), upper_bound().

            3. GRAPH SEARCHES (BFS vs DFS)
            - BFS searches level by level. It is ALWAYS used to find the shortest path.
            - DFS dives to the very bottom of a path first. Faster to write, great for counting components.
            )";

    cout << "\n--- Array Algorithms Execution ---\n";
    int n = 10;
    int nums[10] = {5, 12, 31, 323, 2, 6, 1, 0, 23, 11};

    // We MUST sort the array before using Two Pointers or Binary Search!
    sort(nums, nums + n); // Array is now: {0, 1, 2, 5, 6, 11, 12, 23, 31, 323}

    cout << "Binary Search for 11: Found at index " << binarySearch(nums, n, 11) << "\n";

    cout << "Two Pointers (Sum = 17): " << (twoPointerSum(nums, n, 17) ? "Yes" : "No") << "\n";

    cout << "Sliding Window Max Sum (k=3): " << slidingWindowMaxSum(nums, n, 3) << "\n";

    return 0;
}