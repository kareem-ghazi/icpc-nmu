/*
 * CONTEST: CONTEST #2
 * PROBLEM: D - ODD DIVISOR
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
        long long n;
        cin >> n;

        bool flag = false;

        // Divide by 2 until you reach an odd number.
        // 72 % 2 = 0
        // 36 % 2 = 0
        // 18 % 2 = 0
        // 9 % 2 = 1 which means...
        // 9 * 2 * 2 * 2 = 72 (9 is an odd divisor)
        while (n != 1)
        {
            if (n % 2 != 0)
            {
                flag = true;
                break;
            } else {
                n /= 2;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}


