/*
 * CONTEST: CONTEST #2
 * PROBLEM: E - SPECIAL TRIANGLE
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int l = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = n - 1 - i; j > 0; --j) {
            cout << " ";
        }

        char c = 'A';

        for (int k = 0; k < l; ++k) {
            if (c == 'Z')
            {
                cout << c;
                c = 'A';
            } else {
                cout << c++;
            }
        }

        cout << endl;
        l += 2;
    }

    return 0;
}


