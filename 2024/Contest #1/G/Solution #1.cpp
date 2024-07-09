/*
 * CONTEST: CONTEST #1
 * PROBLEM: G - VALORANT!
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (s == "Phoenix")
        {
            cout << "Jokes over, you're dead!" << endl;
        } else if (s == "Sova")
        {
            cout << "Nowhere to run!" << endl;
        } else if (s == "Kay/o")
        {
            cout << "You. Are. Powerless" << endl;
        } else if (s == "Chamber")
        {
            cout << "You want to play? Let's play" << endl;
        } else if (s == "Sage")
        {
            cout << "You will not kill my allies!" << endl;
        }
    }

    return 0;
}

