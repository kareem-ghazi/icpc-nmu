/*
 * CONTEST: CONTEST #2
 * PROBLEM: A - SOOO HUNGRY
 * SOLVER: KAREEMGH
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long x, y;
    cin >> x >> y;

    if (x % y == 0)
    {
        cout << x / y << endl;
    } else {
        cout << (x / y) + 1 << endl;
    }

    return 0;
}
