/*
 * CONTEST: CONTEST #1
 * PROBLEM: B - SOFT DRINKING
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Read the note in the problem and follow the sequence.
    long long one = k * l;
    long long two = one / nl;
    long long three = c * d;
    long long four = p / np;

    cout << (min(two, min(three, four))) / n << endl;

    return 0;
}