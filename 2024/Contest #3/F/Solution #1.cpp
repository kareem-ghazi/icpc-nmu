/*
 * CONTEST: CONTEST #3
 * PROBLEM: F - FRONT - END
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int front = 0;
    int back = n - 1;

    for (int i = 0; front <= back; ++i) {
        if (i % 2 == 0)
        {
            cout << vec[front] << " ";
            front++;
        } else {
            cout << vec[back] << " ";
            back--;
        }
    }

    return 0;
}



