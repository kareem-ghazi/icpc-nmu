/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: A - TIME ROOM
 * SOLVER: TRIPLE POINTERS
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Z, X;
    cin >> Z >> X;

    double time_outside = static_cast<double> (Z) / X;

    // setprecision(x) : sets how many values after the decimal point.
    // fixed : shows the values even if they are zeros. (e.g. 2.000000000).
    cout << fixed << setprecision(10) << time_outside << endl;

    return 0;
}
