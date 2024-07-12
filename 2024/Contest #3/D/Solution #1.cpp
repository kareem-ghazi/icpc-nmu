/*
 * CONTEST: CONTEST #3
 * PROBLEM: D - BALANCE
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
        long long l, r;
        cin >> l >> r;

        long long diff = abs(l - r);

        if (diff + l == diff + r) // If we add x (difference between them) and they are equal, print with A.
        {
            cout << diff << " " << "A";
        } else if (diff + l == r) // Else if we add it to l and it equals r, then print with L.
        {
            cout << diff << " " << "L";
        } else if (diff + r == l) // Else if we add it to r and it equals l, then print with R.
        {
            cout << diff << " " << "R";
        }

        cout << endl;
    }

    return 0;
}



