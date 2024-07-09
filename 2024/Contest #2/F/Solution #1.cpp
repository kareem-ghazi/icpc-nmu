/*
 * CONTEST: CONTEST #2
 * PROBLEM: F - TECHNICAL ISSUE
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> teams(n + 1);
        vector<pair<int, int>> scores(n + 1);

        int winnerIndex = 0;
        cin >> teams[0] >> scores[0].first >> scores[0].second;

        // For each team, find first if the number of problems solved is bigger than the current highest.
        // If they are equal, find the one with the lowest time penalty.
        for (int i = 1; i < n; ++i) {
            cin >> teams[i] >> scores[i].first >> scores[i].second;

            if (scores[i].first > scores[winnerIndex].first)
            {
                winnerIndex = i;
            } else if (scores[i].second < scores[winnerIndex].second && scores[i].first == scores[winnerIndex].first)
            {
                winnerIndex = i;
            }
        }

        cout << teams[winnerIndex] << endl;
    }

    return 0;
}


