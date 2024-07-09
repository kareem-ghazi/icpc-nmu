/*
 * CONTEST: CONTEST #2
 * PROBLEM: C - LITTLE ELEPHANT AND FUNCTION
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

void recursion(int arr[], int x)
{
    if (x == 1)
    {
        return;
    } else { // Apparently, swapping before calling the function works instead of calling then swapping.
        swap(arr[x - 1], arr[x - 2]);
        recursion(arr, x - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int arr[1002];

    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    recursion(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

