/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: D - OVERCODE
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("overcode.in", "r", stdin);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> coders(n);

        for (int i = 0; i < n; ++i) {
            cin >> coders[i];
        }

        sort(coders.begin(), coders.end());

        int team_count = 0;
        int i = 0;

        while (i + 5 < n) {
            // Sliding window and check if their difference is smaller than 1000. Must be sorted first.
            // [(i) 0 0 0 0 (i + 5) 0 0 0 0 0 0] -> [0 (i) 0 0 0 0 (i + 5) 0 0 0 0 0]
            // -> [0 0 (i) 0 0 0 0 (i + 5) 0 0 y00] -> etc...
            //
            // If it finds a match for the condition, it skips by 6 positions.
            // [(i) 0 0 0 0 (i + 5) 0 0 0 0 0 0] -> [0 0 0 0 0 0 (i) 0 0 0 0 (i + 5) 0]
            if (coders[i + 5] - coders[i] <= 1000) {
                team_count++;
                i += 6;
            } else {
                i++;
            }
        }

        cout << team_count << "\n";
    }

    return 0;
}
