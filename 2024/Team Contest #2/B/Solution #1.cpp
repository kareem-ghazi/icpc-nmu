/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: B - CHROME TABS
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("tabs.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n == 1) // If the number of tabs is one, then 0 because you're already inside the tab.
            cout << 0 << endl;
        else if (k == 1 || n == k) // If the number of tabs is equal to the number of open tabs, or if the open tab is 1, then you need at least 1 press to close the others.
            cout << 1 << endl;
        else // Otherwise, you need at least 2.
            cout << 2 << endl;
    }

    return 0;
}

