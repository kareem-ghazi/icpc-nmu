/*
 * CONTEST: TEAM FORMATION CONTEST
 * PROBLEM: C - BEAUTIFUL STRING
 * SOLVER: KAREEMGH
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char lastCharacter = '.';

    for (int i = 0; i < s.size(); i++) {
        if (lastCharacter != s[i]) {
            cout << s[i];
            lastCharacter = s[i];
        }
    }
}
