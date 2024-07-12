/*
 * CONTEST: CONTEST #3
 * PROBLEM: C - NEED FOR PROBLEMS
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    // Sum your values and the other person's values
    long long sumn{};
    long long summ{};

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;

        sumn += temp;
    }

    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;

        summ += temp;
    }

    // If your value is greater than the other person's, then no need to solve more.
    if (sumn > summ)
    {
        cout << 0;
    } else { // Else, find the absolute difference and add a one to be greater than.
        cout << abs(sumn - summ) + 1 << endl;
    }

    return 0;
}


