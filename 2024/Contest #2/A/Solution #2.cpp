/*
 * CONTEST: CONTEST #2
 * PROBLEM: A - SOOO HUNGRY
 * SOLVER: ELSHEHAWI
 *
 */

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long X, Y;
    cin >> X >> Y;

    long long minutes = (X + Y - 1) / Y;
    cout << minutes << endl;

    return 0;
}

