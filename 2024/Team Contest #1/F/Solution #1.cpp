/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: F - RUN-SCOOBY !!
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    char arr[n][n];

    int ghost;
    int shaggy;
    int scooby;
    int exit;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];

            if (arr[i][j] == 'G')
            {
                ghost = i;
            } else if (arr[i][j] == 'H')
            {
                shaggy = i;
            } else if (arr[i][j] == 'S')
            {
                scooby = i;
            } else if (arr[i][j] == 'E')
            {
                exit = i;
            }
        }
    }

    // If scooby & shaggy & the exit are all above the ghost, then they can escape because they will only go up the floors.
    if (scooby > ghost && shaggy > ghost && exit > ghost)
    {
        cout << "Scooby-Dooby-Doo!" << endl;
    } else if (scooby < ghost && shaggy < ghost && exit < ghost) { // If scooby & shaggy & the exit are all below the ghost, then they can escape because they will only go up the floors till they reach the exit.
        cout << "Scooby-Dooby-Doo!" << endl;
    } else {
        cout << "Ruh-roh--RAGGY!!!" << endl;
    }

    return 0;
}
