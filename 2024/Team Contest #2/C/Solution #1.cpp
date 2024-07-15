/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: C - A MESSAGE FOR YOU!
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("scoreboard.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        vector<char> vec(k + 1);

        for (int i = 0; i < k; ++i) {
            cin >> vec[i];
        }

        map<char, int> mp;

        for (int i = 0; i < 13; ++i) {
            cin >> mp['A' + i];
        }

        int maxi = INT_MIN;
        char letter;

        for (int i = 0; i < 13; ++i) {
            if (std::find(vec.begin(), vec.end(), 'A' + i) != vec.end()) {
                continue;
            }

            if (mp['A' + i] >= maxi) {
                maxi = mp['A' + i];
                letter = 'A' + i;
            }
        }

        cout << letter << endl;
    }

    return 0;
}

