/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: I - BABY !EHAB
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("equal.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x == y || y == z || z == x)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

