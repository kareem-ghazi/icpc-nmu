/*
 * CONTEST: CONTEST #1
 * PROBLEM: E - ARRAY COLORING
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
        int n;
        cin >> n;

        int arr[51];
        int odds{};
        int evens{};

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];

            if (arr[i] % 2 == 0)
                evens++;
            else
                odds++;
        }

        // odd + odd = even
        // even + even = even
        // Find if the number of odds is even or not.
        if (odds % 2 == 0)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

