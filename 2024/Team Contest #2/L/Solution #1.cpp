/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: L - GAME OF STRINGS
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("game.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string s1, s2;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 60 && s[i] <= 90)
            {
                s1 += s[i];
            } else if (s[i] >= 97 && s[i] <= 122)
            {
                s2 += s[i];
            }
        }

        cout << (s2.size() > s1.size() ? s2 : s1) << endl;
    }

    return 0;
}

