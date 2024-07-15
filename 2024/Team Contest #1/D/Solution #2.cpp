/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: D - IT'S VERY EASY
 * SOLVER: CAFFEINE CREW
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    vector<long long> arr(t);
    long double logSum = 0;

    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        logSum += log(arr[i]);
    }

    long double logProduct = logSum / t;

    long long left = 1, right = 1e10 + 1, ans = right;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (t * log(mid) > logSum) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}