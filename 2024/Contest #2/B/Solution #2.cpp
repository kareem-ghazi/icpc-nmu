/*
 * CONTEST: CONTEST #2
 * PROBLEM: B - UNLOCK THE LAPTOP
 * SOLVER: ELSHEHAWI
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countPalindromes(vector<char>& arr) {
    int n = arr.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        unordered_map<char, int> freq;
        for (int j = i; j < n; j++) {
            freq[arr[j]]++;
            int oddCount = 0;
            for (auto& p : freq) {
                if (p.second % 2 != 0) {
                    oddCount++;
                }
            }
            if (j - i + 1 >= 3 && oddCount <= 1) {
                res++;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << countPalindromes(arr) << endl;
    return 0;
}
