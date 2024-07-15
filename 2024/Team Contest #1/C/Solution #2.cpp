/*
 * CONTEST: TEAM CONTEST #1
 * PROBLEM: C - SCOOBY DOO VACATION
 * SOLVER: CAFFEINE CREW
 */

#include <iostream>
#include <vector>
using namespace std;

long kthPrime(long k) {

    long upperBound = 11000000;

    vector<bool> isPrime(upperBound + 1, true);
    vector<long> primes;

    for (int p = 2; p * p <= upperBound; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= upperBound; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= upperBound; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes[k - 1];
}

int main() {
    long k;
    cin >> k;


    long result = kthPrime(k);

    cout << result << endl;

    return 0;
}
