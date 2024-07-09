/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: G - KATRYOSHKA
 * SOLVER: TRIPLE POINTERS
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n, m, k;
    cin >> n >> m >> k;

    long long sum{};

    sum += min(n, min(m, k));
    n -= sum;
    m -= sum;
    k -= sum;

    sum += min(n / 2, k);

    cout << sum << endl;

    return 0;
}
