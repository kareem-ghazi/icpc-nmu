/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: E - SAFE ROOM
 * SOLVER: TRIPLE POINTERS
 */

#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    if (L > R) {
        swap(L, R);
    }

    long long sum = 0;

    if (L % 2 == 0) {
        L++;
    }

    for (int i = L; i <= R; i += 2) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}