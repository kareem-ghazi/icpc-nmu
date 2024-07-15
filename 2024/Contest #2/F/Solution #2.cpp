/*
 * CONTEST: CONTEST #2
 * PROBLEM: F - TECHNICAL ISSUE
 * SOLVER: ELSHEHAWI
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    int questions;
    long long time;
};

bool compareTeams(const Team& a, const Team& b) {
    if (a.questions != b.questions) {
        return a.questions > b.questions;
    } else {
        return a.time < b.time;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Team> teams(n);
        for (int i = 0; i < n; i++) {
            cin >> teams[i].name >> teams[i].questions >> teams[i].time;
        }
        sort(teams.begin(), teams.end(), compareTeams);
        cout << teams[0].name << endl;
    }
    return 0;
}


