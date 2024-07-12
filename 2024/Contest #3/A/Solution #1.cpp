/*
 * CONTEST: CONTEST #3
 * PROBLEM: A - EASY-PROBLEM
 * SOLVER: ARTIFICIAL INTELLIGENCE
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int smallestPositiveOnRight = INT_MAX;

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] > 0) {
            smallestPositiveOnRight = min(smallestPositiveOnRight, a[i]);
        } else {
            a[i] = smallestPositiveOnRight;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

