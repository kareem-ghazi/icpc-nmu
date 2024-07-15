/*
 * CONTEST: CONTEST #2
 * PROBLEM: E - SPECIAL TRIANGLE
 * SOLVER: ELSHEHAWI
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char currentLetter = 'A';

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << currentLetter;
            currentLetter++;

            if (currentLetter > 'Z')
                currentLetter = 'A';
        }
        currentLetter = 'A';

        cout << endl;
    }
    return 0;
}


