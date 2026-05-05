// QUESTION LINK: https://toph.co/p/grid-y-rotations

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


int main() {
    FastRead;

    int x,y;
    cin >> x >> y;

    int arr[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }

    int rotations;
    cin >> rotations;

    for (int i = 0; i < rotations; i++) {
        int r,c;
        cin >> r >> c;

        int adj1 = -1, adj2 = -1, adj3 = -1, adj4 = -1, adj5 = -1, adj6 = -1, adj7 = -1, adj8 = -1;

        if (r-1 >= 0 && c-1 >= 0) adj1 = arr[r-1][c-1];
        if (r-1 >= 0) adj2 = arr[r-1][c];
        if (r-1 >= 0 && c+1 < y) adj3 = arr[r-1][c+1];
        if (c+1 < y) adj4 = arr[r][c+1];
        if (r+1 < x && c+1 < y) adj5 = arr[r+1][c+1];
        if (r+1 < x) adj6 = arr[r+1][c];
        if (r+1 < x && c-1 >= 0) adj7 = arr[r+1][c-1];
        if (c-1 >= 0) adj8 = arr[r][c-1];

        if (adj1 != -1) arr[r-1][c-1] = adj8;
        if (adj2 != -1) arr[r-1][c] = adj1;
        if (adj3 != -1) arr[r-1][c+1] = adj2;
        if (adj4 != -1) arr[r][c+1] = adj3;
        if (adj5 != -1) arr[r+1][c+1] = adj4;
        if (adj6 != -1) arr[r+1][c] = adj5;
        if (adj7 != -1) arr[r+1][c-1]= adj6;
        if (adj8 != -1) arr[r][c-1] = adj7;

        for (int k = 0; k < x; k++) {
            for (int f = 0; f < y; f++) {
                cout << arr[k][f];
                if (f+1 != y) cout << " ";
            }
            cout << "\n";
        }
    }


    return 0;
}