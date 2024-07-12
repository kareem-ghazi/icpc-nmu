/*
 * CONTEST: CONTEST #3
 * PROBLEM: B - HONGCOW LEARNS THE CYCLIC SHIFT
 * SOLVER: KAREEMGH
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    // A set only stores unique values.
    set<string> set1;

    set1.insert(s);

    // Store the last character, pop it from the end, and then add it to the start. Then add to the set.
    for (int i = 0; i < s.size(); ++i) {
        char back = s.back();
        s.pop_back();
        s = back + s;

        set1.insert(s);
    }

    cout << set1.size() << endl;

    return 0;
}

