/*
 * CONTEST: CONTEST #2
 * PROBLEM: B - UNLOCK THE LAPTOP
 * SOLVER: ARTIFICIAL INTELLIGENCE
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool canFormPalindrome(unordered_map<char, int>& char_count) {
    int odd_count = 0;
    for (auto& pair : char_count) {
        if (pair.second % 2 != 0) {
            odd_count++;
        }
    }
    return odd_count <= 1;
}

int countPalindromicSubarrays(int N, const vector<char>& A) {
    int count = 0;
    for (int start = 0; start < N; ++start) {
        unordered_map<char, int> char_count;
        for (int end = start; end < N; ++end) {
            char_count[A[end]]++;
            if (end - start + 1 >= 3) {
                if (canFormPalindrome(char_count)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<char> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = countPalindromicSubarrays(N, A);
    cout << result << endl;

    return 0;
}
