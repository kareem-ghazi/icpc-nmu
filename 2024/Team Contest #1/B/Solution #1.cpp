/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: B - MYSTERY BOOK
 * SOLVER: TRIPLE POINTERS
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    cin >> s;

    string result;

    // For each character c in the string s.
    for(char c : s) {
        if (c != '.') {
            result += c;
        }
    }

    if (result.empty()) {
        cout << "Null" << endl;
    }
    else{
        cout << result << endl;
    }


    return 0;
}
