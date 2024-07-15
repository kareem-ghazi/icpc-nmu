/*
 * CONTEST: CONTEST #2
 * PROBLEM: D - ODD DIVISOR
 * SOLVER: ELSHEHAWI
 */

#include <iostream>

using namespace std;

bool isPowerOfTwo(long long n) {
    return (n & (n - 1)) == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        (isPowerOfTwo(n)) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}


