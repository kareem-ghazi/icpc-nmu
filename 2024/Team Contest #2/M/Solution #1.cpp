/*
 * CONTEST: TEAM CONTEST #2
 * PROBLEM: M - SURVIVE
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("survive.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a >= b)
            cout << "Survive" << endl;
        else
            cout << "Lost" << endl;
    }

    return 0;
}

