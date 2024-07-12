/*
 * CONTEST: TEAM FORMATION CONTEST
 * PROBLEM: B - TRIP (2)
 * SOLVER: KAREEMGH
 */

#include <iostream>

using namespace std;

int main()
{
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;

    int carsPizza = 0;
    if (x < a) {
        carsPizza += 30 * x;
    } else if (x >= a) {
        carsPizza += 30 * a;
    }

    int motoPizza = 0;
    if (y < b) {
        motoPizza += 5 * y;
    } else if (y >= b) {
        motoPizza += 5 * b;
    }

    int remCars = (x <= a) ? 0 : x - a;
    int remMotos = (y <= b) ? 0 : y - b;

    if (c >= 1 && remCars >= 1 && x != 0) {
        while (remCars) {
            carsPizza += 30;
            remCars--;
            c--;

            if (c < 1 || remCars < 1) {
                break;
            }
        }
    }

    if (c >= 1 && remMotos >= 1 && y != 0) {
        while (remMotos) {
            motoPizza += 5;
            remMotos--;
            c--;

            if (c < 1 || remMotos < 1) {
                break;
            }
        }
    }

    cout << motoPizza + carsPizza << endl;
}
