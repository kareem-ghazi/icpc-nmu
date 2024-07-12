/*
 * CONTEST: CONTEST #3
 * PROBLEM: G - DR. SAMIR'S TRAINEES (HARD EDITION)
 * SOLVER: ARTIFICIAL INTELLIGENCE
 *
 * TOPIC: MODULAR EXPONENTIATION (https://en.wikipedia.org/wiki/Modular_exponentiation)
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    const long long MOD = 1000000007;

    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 10 << endl;
        return 0;
    }

    long long result = 1;
    long long base = 10;
    long long exp = N - 1;

    // Compute 10^(N-1) % MOD using exponentiation by squaring
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }

        base = (base * base) % MOD;
        exp /= 2;
    }

    // Multiply by 9 to get the final result
    result = (result * 9) % MOD;

    cout << result << endl;

    return 0;
}



