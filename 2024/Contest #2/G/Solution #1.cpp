/*
 * CONTEST: CONTEST #2
 * PROBLEM: G - FRONT - END
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n + 1);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int front = 0;
    int back = n - 1;

    // Essentially as the question's name suggest, keep track of the front and the end of the array.
    // To alternate between removing from the back and end, just get the modulus of i by 2.
    // After printing out, if it's the front, increment it. If it's the back, decrement and repeat.
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


