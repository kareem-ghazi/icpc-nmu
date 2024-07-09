/*
 * CONTEST: CONTEST #1
 * PROBLEM: D - DIVISION?
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
        int rating;
        cin >> rating;

        if (rating <= 1399)
        {
            cout << "Division 4" << endl;
        } else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3" << endl;
        } else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2" << endl;
        } else if (rating >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}

