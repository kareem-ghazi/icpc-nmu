/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: C - SCOOBY DOO VACATION
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{
    bool isPrime = true;

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k;
    cin >> k;

    int i = 0;
    int kthp;

    for (int j = 2; i < k; ++j) {
        if (isPrime(j))
        {
            i++;
            kthp = j;
        }
    }

    cout << kthp << endl;

    return 0;
}
